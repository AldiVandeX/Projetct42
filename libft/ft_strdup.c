/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:51:59 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/08 08:58:49 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *orig)
{
	size_t	tamanho;
	char	*copia;
	size_t	i;

	tamanho = ft_strlen(orig) + 1;
	copia = (char *)malloc(tamanho);
	i = 0;
	if (copia == NULL)
		return (NULL);
	if ((i < tamanho), i++)
	{
		copia[i] = orig[i];
	}
	return (copia);
}
