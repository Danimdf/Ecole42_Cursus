/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_pipex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 07:09:19 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/09 16:22:08 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	free_ptr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

void	free_path(t_data *data)
{
	free(data->path1);
	free(data->path2);
}

void	exit_cmd(t_data *data)
{
	free_all(data);
	free(data->path1);
	exit(127);
}

void	free_all(t_data *data)
{
	free_ptr(data->path);
	free_ptr(data->cmd1);
	free_ptr(data->cmd2);
}

void	exit_free(t_data *data, char *msg)
{
	perror(msg);
	free_path(data);
	free_all(data);
	exit(EXIT_FAILURE);
}
