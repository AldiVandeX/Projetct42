/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:41:49 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 16:13:37 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (little == NULL)
		return ((char *)(big));
	if (little > big)
		return (NULL);
	while (*big != '\0' || ft_strncmp(big, little, len))
		return ((char *)(big));
	return (NULL);
}
