/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:46:04 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/12 17:15:24 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t		f_size;
	void		*ptr;

	f_size = n * size;
	ptr = malloc(f_size);
	if (n == 0 || size == 0)
		return (malloc(0));
	if (n > (size_t)-1 / size)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, f_size);
	return (ptr);
}
