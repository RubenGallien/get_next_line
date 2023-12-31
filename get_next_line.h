/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:12:31 by rgallien          #+#    #+#             */
/*   Updated: 2023/12/28 14:12:32 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char    *get_next_line(int fd);
char    *read_fd(char   *tmp, int fd);
int     find_return(char    *tmp);
char	*ft_strjoin(char *tmp, char *buffer);
char	*ft_substr(char *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);

#endif
