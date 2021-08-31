/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:57:57 by dmonteir          #+#    #+#             */
/*   Updated: 2021/06/28 12:54:37 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/resource.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *str1);
char			*ft_substr(char *s, unsigned int start, size_t len);
void			*ft_calloc(size_t nitems, size_t size);

#endif
