/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 06:16:00 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/13 18:15:15 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			len_dest;
	size_t			len_src;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	len_dest = i;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	while (src[j] != '\0' && (len_dest + j + 1) < size)
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_dest + len_src);
}

// int main()
// {
//     // Teste 1: String com espaço suficiente
//     char dest1[20] = "Hello, ";
//     const char *src1 = "World!";
//     size_t size1 = 20;

//     size_t result1 = ft_strlcat(dest1, src1, size1);
//     printf("Resultado 1: %s\n", dest1);  // Esperado: "Hello, World!"
//     printf("Tamanho esperado: %zu\n", result1);  // Esperado: 13

//     // Teste 2: String com espaço insuficiente
//     char dest2[10] = "Hello, ";
//     const char *src2 = "World!";
//     size_t size2 = 10;

//     size_t result2 = ft_strlcat(dest2, src2, size2);
//     printf("Resultado 2: %s\n", dest2);  // Esperado: "Hello, Wor"
//     printf("Tamanho esperado: %zu\n", result2);  // Esperado: 13

//     return 0;
// }