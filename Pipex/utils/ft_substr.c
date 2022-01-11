/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 07:44:28 by dmonteir          #+#    #+#             */
/*   Updated: 2022/01/07 07:44:33 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
/* will create a string with length len from position start of s */
{
	char				*c;
	unsigned int		i;

	if (!s)
		return (0);
	i = 0;
	c = malloc(len + 1);
	if (c == NULL)
		return (0);
	if (ft_strlen(s) < start)
	{
		c[i] = '\0';
		return (c);
	}
	while (i < len)
	{
		c[i] = s[start];
		i++;
		start ++;
	}
	c[i] = '\0';
	return (c);
}
