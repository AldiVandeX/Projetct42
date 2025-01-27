/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:39:33 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/19 15:49:14 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *strg)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (strg[i] == ' ' || (strg[i] >= '\f' && strg[i] <= 13))
		i++;
	if (strg[i] == '-' || strg[i] == '+')
	{
		if (strg[i] == '-')
			sign = -1;
		i++;
	}
	while (strg[i] >= '0' && strg[i] <= '9')
	{
		result = result * 10 + (strg[i] - 48);
		i++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	strg[] = "12345";
// 	int			value =	ft_atoi(strg);

// 	printf("String to be Converted: %s\n", strg);
// 	printf("Converted to Integer: %d\n", value);
// 	return (0);
// }
