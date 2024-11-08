/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:46:04 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/08 09:49:55 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	full_size;
	void	*ptr;

	full_size = n * size;
	ptr = malloc(full_size);
	if (ptr == NULL)
		return (NULL);
	bzero(ptr, full_size);
	return (ptr);
}
