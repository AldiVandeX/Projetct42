/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:51:59 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/08 09:56:32 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *orig)
{
	size_t	size;
	char	*cop;
	size_t	i;

	size = ft_strlen(orig) + 1;
	cop = (char *)malloc(size);
	i = 0;
	if (cop == NULL)
		return (NULL);
	if ((i < size), i++)
	{
		cop[i] = orig[i];
	}
	return (cop);
}
