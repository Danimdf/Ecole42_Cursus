/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this_Read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:17:27 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/05 18:34:07 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**this_Read(char *file)
{
	char	**map;
	int		index;
	int		fd;


	map = columns(file);
	if (map == NULL)
		printf("ERROR!miau\n");
	fd = open(file, O_RDONLY);

	index = 0;

	while (get_next_line(fd, &map[index++]));

	while (map[index] != NULL)
	{
		printf("%s",map[index]);
		index++;
	}

	map[index] = NULL;

	close(fd);

	return (map);

}
