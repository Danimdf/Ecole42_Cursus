/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_Read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:17:27 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/14 20:18:16 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**this_Read(char *file)
{
	char	**map;
	int		index;
	int		fd;
	int		gnl;

	map = columns(file);
	if (map == NULL)
	{
		printf("ERROR!miau\n");
		exit (1);
	}
	fd = open(file, O_RDONLY);
	index = 0;
	gnl = 1;
	while (gnl)
		gnl = get_next_line(fd, &map[index++]);
	map[index] = NULL;

	close(fd);
	return (map);
}
