/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:06:10 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 15:57:53 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;

	result = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (result)
	{
		ft_strlcpy(result, s1, ft_strlen((char *)s1));
		ft_strlcat(result, s2, ft_strlen((char *)s2));
	}
	return (result);
}
