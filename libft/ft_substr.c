/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:13 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 16:56:51 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_substr(int pos, int len, int i, char string[])
{
	char	sub[1000];

	while (i < len)
	{
		sub[i] = string[pos + i - 1];
		i++;
	}
	sub[i] = '\0';
}
