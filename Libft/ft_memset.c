/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:32:53 by aldvieir          #+#    #+#             */
/*   Updated: 2024/10/24 18:08:35 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t n)
{
	size_t	s;

	s = 0;
	while (s < n)
	{
		*(unsigned char *)(p + s) = (unsigned char) value;
		s++;
	}
	return (p);
}
