/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:39:33 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/06 12:24:07 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *strg)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (strg[i] == ' ' || strg[i] == '\t' || strg[i] == '\0')
	{
		i++;
	}
	if (strg[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (strg[i] == '+')
		i++;
	while (strg[i] >= '0' && strg[i] <= '9')
	{
		result = result * 10 + (strg[i] - '0');
		i++;
	}
	return (sign * result);
}

int	ft_atoi(const char *strg)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (strg[i] != '\0')
	{
		res = res * 10 + (strg[i] - '0');
		i++;
	}
	return (res);
}

/*int	main(void)
{
	const char	strg[] = "12345";
	int			value =	ft_atoi(strg);

	printf("String to be Converted: %s\n", strg);
	printf("Converted to Integer: %d\n", value);
	return (0);
}
*/