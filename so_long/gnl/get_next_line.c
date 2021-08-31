/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:51:03 by dmonteir          #+#    #+#             */
/*   Updated: 2021/06/28 12:19:02 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (len);
	while (s[len] != 0)
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((s[i] != '\0') && ((char)c != s[i]))
		i++;
	if ((char)c == s[i])
		return ((char *)s + i);
	else
		return (0);
}

char	*new_line(char *temp, char **line, int i)
{
	char	*excess;
	int		counter;

	excess = NULL;
	counter = 0;
	while ((*(temp + counter) != '\n') && (*(temp + counter) != '\0'))
		counter++;
	if (temp[counter] == '\n')
	{
		*line = ft_substr(temp, 0, counter);
		excess = ft_strdup(&((temp)[counter + 1]));
		free(temp);
	}
	else
	{
		*line = ft_strdup(temp);
		free(temp);
	}
	if (i != 0)
		if (!excess)
			return (NULL);
	return (excess);
}

int	this_read(int fd, char *buff, char **temp, int *ret)
{
	char	*ptr_temp;

	while (*ret && (!(ft_strchr(*temp, '\n'))))
	{
		*ret = read(fd, buff, BUFFER_SIZE);
		if (*ret < 0)
		{
			free(buff);
			return (-1);
		}
		*(buff + *ret) = '\0';
		ptr_temp = ft_strjoin(*temp, buff);
		free(*temp);
		*temp = ptr_temp;
	}
	free(buff);
	if (*ret == 0)
		return (0);
	return (1);
}

int	get_next_line(int fd, char **line)
{
	static char	*temp;
	char		*buff;
	int			ret;

	ret = 1;
	if (fd < 0 || !line || BUFFER_SIZE <= 0 || fd > RLIMIT_NOFILE)
		return (-1);
	if (!temp)
		temp = ft_strdup("");
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (-1);
	if ((this_read(fd, buff, &temp, &ret)) == -1)
		return (-1);
	temp = new_line(temp, line, ret);
	if (!ret)
		return (0);
	return (1);
}
