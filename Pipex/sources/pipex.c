/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:42:01 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/09 15:48:48 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	valid_params(t_data *data, char **argv, char **env)
{
	if (data->ac != 5)
	{
		write(1, "Number of parameters is incorrect\n", 35);
		exit(EXIT_FAILURE);
	}
	else
		get_path(data, argv, env);
}

int	main(int argc, char **argv, char **env)
{
	t_data	data;

	data.ac = argc;
	data.av = argv;
	data.ev = env;
	valid_params(&data, argv, env);
	return (this_pipex(&data));
}
