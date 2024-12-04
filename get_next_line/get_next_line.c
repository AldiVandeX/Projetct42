/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreis-do <jreis-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:45:21 by jreis-do          #+#    #+#             */
/*   Updated: 2024/11/14 08:11:43 by jreis-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_str(char *s)
{
	int		count;
	char	*str;

	count = 0;
	if (!s[count])
		return (NULL);
	while (s[count] && s[count] != '\n')
		count++;
	str = (char *)malloc(sizeof(char) * (count + 2));
	if (!str)
		return (NULL);
	count = 0;
	while (s[count] && s[count] != '\n')
	{
		str[count] = s[count];
		count++;
	}
	if (s[count] == '\n')
	{
		str[count] = s[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}

static char	*ft_read_str(int fd, char *s)
{
	char	*str;
	ssize_t	bytes;

	str = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(s, '\n') && bytes > 0)
	{
		bytes = read(fd, str, BUFFER_SIZE);
		if (bytes == -1)
		{
			free (s);
			free (str);
			return (NULL);
		}
		str[bytes] = '\0';
		s = ft_strjoin(s, str);
	}
	free (str);
	return (s);
}

static char	*ft_next_str(char *s)
{
	int		count;
	int		aux;
	char	*str;

	count = 0;
	aux = 0;
	while (s[count] && s[count] != '\n')
		count++;
	if (!s[count])
	{
		free (s);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	count++;
	while (s[count])
		str[aux++] = s[count++];
	str[aux] = '\0';
	free (s);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_read_str(fd, str);
	if (!str)
	{
		free (str);
		return (NULL);
	}
	result = ft_get_str(str);
	if (!result)
	{
		free (str);
		str = NULL;
		return (NULL);
	}
	str = ft_next_str(str);
	return (result);
}
