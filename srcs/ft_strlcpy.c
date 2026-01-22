/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:05:40 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/16 21:31:30 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[5];
    char *src = "aaaaaaaaaaaaaaaaaaa";

    size_t retorno = ft_strlcpy(dest, src, sizeof(dest));

    size_t copiado;
    size_t faltando;

    if (retorno < sizeof(dest))
        copiado = retorno;
    else
        copiado = sizeof(dest) - 1;

    if (retorno > sizeof(dest) - 1)
        faltando = retorno - (sizeof(dest) - 1);
    else
        faltando = 0;

    printf("src: '%s'\n", src);
    printf("dest: '%s'\n", dest);
    printf("tamanho total da origem: %lu\n", retorno);
    printf("tamanho copiado para dest: %lu\n", copiado);
    printf("faltaram copiar: %lu\n", faltando);

    return 0;
	return (0);
}
*/
