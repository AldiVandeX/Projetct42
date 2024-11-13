/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:51:59 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 15:52:24 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *orig)
{
	size_t	size;
	char	*cop;
	size_t	i;

	size = ft_strlen((char *)orig) + 1;
	cop = (char *)malloc(size);
	i = 0;
	if (orig == NULL)
		return (NULL);
	if (i < size)
	{
		cop[i] = orig[i];
		i++;
	}
	return (cop);
}
