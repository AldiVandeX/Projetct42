/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:21:41 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 18:39:40 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while ((*s1 != '\0' ) && (count < n - 1))
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		count++;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*par1;
// 	char	*par2;
// 	int		result;

// 	par1 = "Hello";
// 	par2 = "HWorld";
// 	result = ft_strncmp(par1, par2, 4);
// 	printf("%d", result);
// }
