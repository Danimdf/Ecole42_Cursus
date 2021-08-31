/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:58:17 by dmonteir          #+#    #+#             */
/*   Updated: 2021/08/31 17:05:55 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int ft_strcmp(const char *str1, const char *str2)
{
	int counter;

	counter = 0;

	while ((unsigned char)str1[counter] == (unsigned char)str2[counter] && str1[counter])
		counter++;
	return ((unsigned char)str1[counter] - (unsigned char)str2[counter]);
}
