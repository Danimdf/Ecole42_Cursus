/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:08:07 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/10 11:36:48 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	valid_Char()

int	ft_valid(char **map, t_game *game)
{
	int	x;
	int	y;

	x = game->obj->x;
	y = game->obj->y;

	if(!valid_char(map[x][y]))
		return (0);
}
