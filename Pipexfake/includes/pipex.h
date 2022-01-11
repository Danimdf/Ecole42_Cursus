/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 07:41:16 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/09 16:22:21 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stddef.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/wait.h>
# include <stdlib.h>

typedef struct s_data
{
	char	**path;
	char	*path1;
	char	*path2;
	char	**cmd1;
	char	**cmd2;
	int		ac;
	char	**av;
	char	*file1;
	char	*file2;
	int		file_in;
	int		file_out;
	int		check_cmd;
	int		fd[2];
	char	**ev;
}	t_data;

int		main(int argc, char *argv[], char **envp);
void	valid_params(t_data *data, char **argv, char **env);
char	get_path(t_data *data, char **argv, char **env);
int		check_path_cmd1(t_data *data);
int		check_path_cmd2(t_data *data);
char	*dup_path(t_data *data, char *ptr_path, char *temp1);
int		this_pipex(t_data *data);
int		check_file(t_data *data);
int		child_execution_1(t_data *data);
int		child_execution_2(t_data *data);
int		fork_func(t_data *data, int pid1, int pid2, int status_code);
void	free_all(t_data *data);
void	free_ptr(char **ptr);
void	check_cmd_null(t_data *data);
void	free_path(t_data *data);
void	exit_free(t_data *data, char *msg);
void	exit_cmd(t_data *data);

//utils
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(const char *str1);
char	**ft_split(const char *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif