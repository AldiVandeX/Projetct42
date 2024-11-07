/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:46:04 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/07 17:46:04 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num_elementos, size_t tamanho_elemento)
{
    size_t tamanho_total;
	void *ptr;
    
    tamanho_total = num_elementos * tamanho_elemento;
    ptr = malloc(tamanho_total);
    if (ptr == NULL)
        return NULL;
    bzero(ptr, tamanho_total);

 return(ptr);
}
