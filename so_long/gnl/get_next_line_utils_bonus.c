/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:56:41 by dmonteir          #+#    #+#             */
/*   Updated: 2021/06/28 12:42:00 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nitems * size);
	if (ptr == 0)
		return (NULL);
	else
	{
		while (i < (nitems * size))
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
	}
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = -1;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ptr = ft_calloc(sizeof(char), 1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (len > ft_strlen(s + start))
		ptr = (char *)ft_calloc(sizeof(char), (ft_strlen(s + start)) + 1);
	else
		ptr = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!ptr)
		return (NULL);
	while (++i < len)
		ptr[i] = s[i + start];
	return (ptr);
}

char	*ft_strdup(const char *str1)
{
	int		i;
	int		len;
	char	*new_str;

	len = 0;
	while (str1[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new_str))
		return (NULL);
	i = 0;
	while (str1[i])
	{
		new_str[i] = str1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (*s1)
		new[i++] = *s1++;
	while (*s2)
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}
