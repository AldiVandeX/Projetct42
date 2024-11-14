/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 05:21:22 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/14 07:52:47 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str(char *str, int num)
{
	char	*array;
	int		count;

	count = 0;
	array = (char *)malloc(sizeof(char) * (num + 1));
	if (!array)
		return (NULL);
	while (num > 0)
		array[count++] = str[--num];
	array[count] = '\0';
	return (array);
}

char	*ft_itoa(int n)
{
	int		c;
	char	array[12];
	long	aux;

	c = 0;
	aux = n;
	if (n < 0)
		aux *= -1;
	if (n == 0)
		return (ft_strdup("0"));
	while (aux > 0)
	{
		array[c++] = '0' + (aux % 10);
		aux /= 10;
	}
	if (n < 0)
		array[c++] = '-';
	return (ft_str(array, c));
}
