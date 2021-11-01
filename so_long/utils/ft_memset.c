/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:25:45 by dmonteir          #+#    #+#             */
/*   Updated: 2021/10/06 22:10:57 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i++] = c;
	}
	return (str);
}
