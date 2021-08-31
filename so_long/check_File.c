/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_File.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 15:45:18 by dmonteir          #+#    #+#             */
/*   Updated: 2021/08/31 15:51:18 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_File(char *file, char *sufx)
{
	int	counter;

	counter = 0;

	while (file[counter + 1])
		counter++;
	while (counter >= 0 && file[counter] != '.')
		counter--;
	if (counter >= 0 && !ft_strcmp(file + counter + 1, sufx))
		return (0);
	return (1);
}

