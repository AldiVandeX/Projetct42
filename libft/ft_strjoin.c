/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:06:10 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/14 00:49:07 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc (sizeof(char) * (len1 + len2 + 1));
	if (!result)
		return (NULL);
	if (result)
	{
		ft_strlcpy(result, s1, len1 + 1);
		ft_strlcat(result, s2, len2 + len1 + 1);
	}
	return (result);
}
