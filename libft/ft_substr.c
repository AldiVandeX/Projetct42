/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:13 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/05 12:51:39 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_substr(int pos, int len, int i, char string[])
{
	char	substring[1000];

	while (i < len)
	{
		substring[i] = string[pos + i - 1];
		i++;
	}
	substring[i] = '\0';
	return (0);
}
