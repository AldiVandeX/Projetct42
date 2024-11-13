/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:16:00 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 15:58:47 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	full_len;
	size_t	space;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	full_len = len_dst + len_src;
	space = size - len_dst - 1;
	i = 0;
	if (len_dst >= size)
	{
		return (full_len);
	}
	while (i < space && src[i] != '\0')
	{
		dst[len_dst + 1] = src[i];
		i++;
	}
	dst[len_dst + 1] = '\0';
	return (full_len);
}

/*#include <stdio.h>

int	main(void)
{
	char		dst[20];
	const char	*src;
	size_t		result;

	dst = "Hello, ";
	src = "World!";
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("Final dst: \"%s\"\n", dst);
	printf("Total length of the string it tried to create: %zu\n", result);
	return (0);
}
*/