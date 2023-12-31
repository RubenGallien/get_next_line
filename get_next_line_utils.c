/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:12:24 by rgallien          #+#    #+#             */
/*   Updated: 2023/12/28 14:12:25 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while(str[i] && str)
		i++;
	return (i);
}

int find_return(char    *tmp)
{
    int i;

	i = 0;
	if (!tmp)
		return (0);
	while (tmp[i])
	{
        if (tmp[i] == '\n')
            return (i);
    	i++;
	}
    return (0);
}

char	*ft_strjoin(char *tmp, char *buffer)
{
	int		i;
	int		total;
	char	*new_tmp;

	if (!tmp || !buffer)
		return (NULL);
	total = ft_strlen(tmp) + ft_strlen(buffer);
	i = 0;
	new_tmp = malloc(sizeof(char) * (total + 1));
	if (!new_tmp)
		return (NULL);
	while (tmp[i])
	{
		new_tmp[i] = tmp[i];
		i++;
	}
	i = 0;
	while (buffer[i])
	{
		new_tmp[i + ft_strlen(tmp)] = buffer[i];
		i++;
	}
	new_tmp[total] = '\0';
	return (new_tmp);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*news;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (s_len <= start)
		len = 0;
	else if (len > (s_len - start))
		len = s_len - start;
	news = malloc(sizeof(char) * (len + 1));
	if (!news)
	{
		return (NULL);
	}
	while (i < len)
	{
		news[i] = s[start + i];
		i++;
	}
	news[i] = '\0';
	return (news);
}