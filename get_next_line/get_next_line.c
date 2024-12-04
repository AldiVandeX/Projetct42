/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:10:34 by aldvieir          #+#    #+#             */
/*   Updated: 2024/12/04 14:19:57 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char *get_next_line(int fd)
{
// 	ssize_t read(int fd, void *buf, size_t nbyte);
char *buf;
int	char_read;

//fd = open("teste.txt", O_RDONLY);
// if (!fd)
	// return (NULL);
if (buf[char_read] != '\0')
while ((char_read = read(fd, buf, 3)))
{
	buf[char_read] = '\n';
	printf("%s", buf);
}
return (0);
}	