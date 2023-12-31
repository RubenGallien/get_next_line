/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:12:14 by rgallien          #+#    #+#             */
/*   Updated: 2023/12/28 14:12:16 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *read_fd(char   *tmp, int fd)
{
    char    *buffer;
    int     i;
    char    *test;

    i = 1;
    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buffer)
        return (NULL);
    while (find_return(tmp) == 0 && (i = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[i] = '\0';
        test = ft_strjoin(tmp, buffer);
        if (ft_strlen(tmp) != 0)
            free(tmp);
        tmp = test;
    }
    free(buffer);
    return (tmp);
    
}

char    *get_next_line(int fd)
{
    static char *tmp = "";
    char        *ligne;
    char        *test;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    tmp = read_fd(tmp, fd);
    if (!tmp || !tmp[0])
        return (NULL);
    ligne = ft_substr(tmp, 0, ft_strlen(tmp) + 1);
    test = tmp;
    tmp = ft_substr(test, ft_strlen(test) + 1, ft_strlen(ligne));
    free(test);
    return (ligne);
}

int main()
{
    int fd;
    char *str;
    //char *str2;
    int end = 0;
    fd = open(".txt", O_RDONLY);
    while (end == 0)
    {
        str = get_next_line(fd);
        if (!str)
            end = 1;
        printf("%s", str);
        free(str);
    //str2 = get_next_line(fd);
    //printf("%s\n", str2);
    }
    close(fd);
    return (0);
}
