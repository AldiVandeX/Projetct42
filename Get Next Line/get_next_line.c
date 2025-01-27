/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 18:56:53 by aldvieir          #+#    #+#             */
/*   Updated: 2024/12/10 05:20:47 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_line(char *s)
{
	int		i;
	char	*txt;

	i = 0;
	if (!s[i])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	txt = (char *)malloc(sizeof(char) * (i + 2));
	if (!txt)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		txt[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		txt[i] = s[i];
		i++;
	}
	txt[i] = '\0';
	return (txt);
}

static char	*ft_read(int fd, char *txt)
{
	char	*line;
	ssize_t	bytes;

	line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!line)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(txt, '\n') && bytes > 0)
	{
		bytes = read(fd, line, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (txt);
			free (line);
			return (NULL);
		}
		line[bytes] = '\0';
		txt = ft_strjoin(txt, line);
	}
	free (line);
	return (txt);
}

static char	*ft_next(char *s)
{
	int		i;
	int		j;
	char	*txt;

	i = 0;
	j = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	txt = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!txt)
		return (NULL);
	i++;
	while (s[i])
		txt[j++] = s[i++];
	txt[j] = '\0';
	free(s);
	return (txt);
}

char	*get_next_line(int fd)
{
	static char	*txt;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	txt = ft_read(fd, txt);
	if (!txt)
	{
		free(txt);
		return (NULL);
	}
	line = ft_line(txt);
	if (!line)
	{
		free(txt);
		txt = NULL;
		return (NULL);
	}
	txt = ft_next(txt);
	return (line);
}
