/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:57:09 by aldvieir          #+#    #+#             */
/*   Updated: 2024/10/08 17:00:22 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>

int main (void)
{
	int a, b, div, mod;

	a = 16;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", mod);
}*/