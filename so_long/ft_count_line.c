/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 10:34:59 by dmonteir          #+#    #+#             */
/*   Updated: 2021/09/09 11:42:28 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_count_line(char **matriz)
{
	int	counter;

	counter = 0;
	while (matriz[counter])
		counter++;
	return (counter);
}

void ft_free_matriz(char **matriz)
{
	int counter;

	counter = 0;
	while (matriz[counter])
	{
		free (matriz[counter]);
		counter++;
	}
	free(matriz);
}
