/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 03:28:58 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/14 05:18:07 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*n_str;
	size_t	start;
	size_t	end;
	size_t	len_s1;
	size_t	len_str;

	start = 0;
	len_s1 = ft_strlen(s1);
	end = len_s1 - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len_str = end - start + 1;
	n_str = (char *)malloc(sizeof(char) * (len_str + 1));
	if (!n_str)
		return (NULL);
	ft_strlcpy(n_str, &s1[start], len_str + 1);
	return (n_str);
}
