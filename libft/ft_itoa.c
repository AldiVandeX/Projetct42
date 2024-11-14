/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 05:21:22 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/14 06:09:33 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
		digits = 1;
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		len;
	int		negative;
	char	*str;

	len = get_digit(n);
	negative = 0;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	str[len] = '\0';
	while (len > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
