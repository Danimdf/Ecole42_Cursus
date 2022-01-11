/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_pipe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:50:56 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/09 16:34:54 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	child_execution_2(t_data *data)
{
	data->file_out = open(data->file2, O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (data->file_out < 0)
		exit_free(data, "Open file 2 failed!");
	close(data->fd[1]);
	if (dup2(data->fd[0], STDIN_FILENO) < 0)
		exit_free(data, "Dup2 not found!");
	if (dup2(data->file_out, STDOUT_FILENO) < 0)
		exit_free(data, "Dup2 not found!");
	close(data->fd[0]);
	if (data->path1 == NULL)
		data->path1 = ft_strdup("/bin");
	if (execve (data->path2, data->cmd2, data->ev) == -1)
		exit_free(data, "Exec 2 failed!");
	return (0);
}

int	child_execution_1(t_data *data)
{
	close(data->fd[0]);
	if (dup2(data->fd[1], STDOUT_FILENO) < 0)
		exit_free(data, "Dup2 not found!");
	close(data->fd[1]);
	data->file_in = open(data->file1, O_RDONLY);
	if (data->file_in < 0)
		exit_free(data, "Open file 1 failed!");
	if (dup2(data->file_in, STDIN_FILENO) < 0)
		exit_free(data, "Dup2 not found!");
	if (data->path1 == NULL)
		data->path1 = ft_strdup("/bin");
	if (execve(data->path1, data->cmd1, data->ev) == -1)
		exit_free(data, "Exec 1 failed!");
	return (0);
}

int	check_file(t_data *data)
{
	data->file_in = open(data->file1, O_RDONLY);
	if (data->file_in < 0)
		exit_free(data, "ERROR file!");
	write(data->file_in, "0", 1);
	data->file_out = open(data->file2, O_CREAT, 0644);
	close(data->file_in);
	close(data->file_out);
	return (0);
}

int	fork_func(t_data *data, int pid1, int pid2, int status_code)
{
	if (pipe(data->fd) < 0)
	{
		perror("Pipe not found!");
		exit(EXIT_FAILURE);
	}
	pid1 = fork();
	if (pid1 < 0)
	{
		perror ("Fork 1 failed!\n");
		exit(EXIT_FAILURE);
	}
	if (pid1 == 0)
		child_execution_1(data);
	waitpid(pid1, &status_code, 0);
	pid2 = fork();
	if (pid2 < 0)
	{
		perror("Fork 2 Not Found!");
		exit(EXIT_FAILURE);
	}
	if (pid2 == 0)
		child_execution_2(data);
	close(data->fd[1]);
	return (pid2);
}

int	this_pipex(t_data *data)
{
	int	pid1;
	int	pid2;
	int	status_code;

	pid1 = 0;
	pid2 = 0;
	status_code = 0;
	check_file(data);
	pid2 = fork_func(data, pid1, pid2, status_code);
	waitpid(pid2, &status_code, 0);
	if (WIFEXITED(status_code))
		status_code = WEXITSTATUS(status_code);
	free_path(data);
	free_all(data);
	return (status_code);
}
