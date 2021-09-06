/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   columns.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:22:15 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/05 20:57:36 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char		**columns(char *file)
{
	int		count;
	int		fd;
	int		read_line;
	char	c;
	char	**map;

	fd = open(file, O_RDONLY);
	if (!fd)
		return (NULL);

	check_File(file, "ber");

	if (fd == 1)
	{
		printf("Error1000\n");
		//exit(1);
	}

	count = 1;
	read_line = 1;
	while (read_line)
	{

		read_line = read(fd, &c, 1);
		if (read_line < 0)
			return (NULL);

		if (c == '\n')
			count++;
	}
	close(fd);
	if (count <= 0)
		printf("ERROR!1\n");
	map = (char **)ft_calloc(count + 1, sizeof(char *));
	if (map == NULL)
		printf("ERROR!2\n");
	return (map);
}
