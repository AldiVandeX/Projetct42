/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:41:49 by aldvieir          #+#    #+#             */
/*   Updated: 2024/10/31 13:47:09 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big;
	const char	*little;
	size_t		little_len;

	if (little == '\0')
		return (big);
	if (little > len)
		return (NULL);
	while (*big != '\0' || ft_strncmp(big, little, little_len))
		return (*big);
	return (NULL);
}
