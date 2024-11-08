/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:10:04 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/08 08:50:01 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_strlen("qualquer"));
	return (0);
}
*/