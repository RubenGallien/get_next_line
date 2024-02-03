/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallien <rgallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:49:39 by rgallien          #+#    #+#             */
/*   Updated: 2024/01/09 23:32:41 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_fd(char	*stash, int fd);
int		ft_strchr(char *stash, char c);
char	*ft_strjoin(char *stash, char *buffer);
int		ft_strlen(char *str);
char	*fill_ligne(char	*tmp);
char	*ft_strdup(char *src);
void	shift_stash(char	*stash);

#endif
