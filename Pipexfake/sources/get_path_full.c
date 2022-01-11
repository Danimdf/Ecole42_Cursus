/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path_full.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 07:21:51 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/09 15:58:26 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*dup_path(t_data *data, char *ptr_path, char *temp1)
{
	data->check_cmd = 1;
	free(ptr_path);
	return (temp1);
}

int	check_path_cmd2(t_data *data)
{
	char	*ptr_path;
	char	*ptr_path_cmd;
	int		i;

	i = 0;
	data->check_cmd = 0;
	while (data->path[++i])
	{
		ptr_path = ft_strjoin(data->path[i], "/");
		ptr_path_cmd = ft_strjoin(ptr_path, *data->cmd2);
		if (!access(ptr_path_cmd, X_OK))
		{
			data->path2 = dup_path(data, ptr_path, ptr_path_cmd);
			break ;
		}
		free(ptr_path);
		free(ptr_path_cmd);
	}
	if (data->check_cmd == 0)
	{
		perror("Command 2 not found!");
		exit_cmd(data);
	}
	return (0);
}

int	check_path_cmd1(t_data *data)
{
	char	*ptr_path;
	char	*ptr_path_cmd;
	int		i;

	data->path1 = 0;
	i = 0;
	data->check_cmd = 0;
	while (data->path[++i])
	{
		ptr_path = ft_strjoin(data->path[i], "/");
		ptr_path_cmd = ft_strjoin(ptr_path, *data->cmd1);
		if (!access(ptr_path_cmd, F_OK))
		{
			data->path1 = dup_path(data, ptr_path, ptr_path_cmd);
			break ;
		}
		free(ptr_path);
		free(ptr_path_cmd);
	}
	if (data->check_cmd == 0)
	{
		perror("Command 1 not found!");
		return (1);
	}
	return (0);
}

void	check_cmd_null(t_data *data)
{
	if (*data->cmd1 == NULL)
	{
		write(1, "Comand invalid, try: infile cmd1 cmd2 outfile\n", 47);
		free_all(data);
		exit(EXIT_FAILURE);
	}
	if (*data->cmd2 == NULL)
	{
		write(1, "Comand invalid, try: infile cmd1 cmd2 outfile\n", 47);
		free_all(data);
		exit(EXIT_FAILURE);
	}
}

char	get_path(t_data *data, char **argv, char **env)
{
	int		i;
	char	*str;

	data->file1 = argv[1];
	data->file2 = argv[data->ac - 1];
	i = 0;
	str = "";
	while (env[i])
	{
		if (ft_strncmp("PATH=", env[i], 5) == 0)
			str = ft_strdup(env[i] + 5);
		i++;
	}
	data->path = ft_split(str, ':');
	free(str);
	data->cmd1 = ft_split(argv[2], ' ');
	data->cmd2 = ft_split(argv[3], ' ');
	check_cmd_null(data);
	check_path_cmd1(data);
	check_path_cmd2(data);
	return (0);
}
