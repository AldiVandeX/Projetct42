/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldvieir <aldvieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:51:59 by aldvieir          #+#    #+#             */
/*   Updated: 2024/11/07 17:51:59 by aldvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *minha_strdup(const char *orig)
{
    // Calcula o tamanho da string original + 1 para o caractere nulo '\0'
    size_t tamanho = strlen(orig) + 1;

    // Aloca memória suficiente para a nova string
    char *copia = (char *)malloc(tamanho);

    // Verifica se a alocação foi bem-sucedida
    if (copia == NULL)
        return NULL;

    // Copia o conteúdo da string original para a nova área de memória
    for (size_t i = 0; i < tamanho; i++) {
        copia[i] = orig[i];
    }

    return copia;
}
