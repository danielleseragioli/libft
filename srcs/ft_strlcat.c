/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:53:52 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/21 11:36:32 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		return (size + len_src);
	while (src[i] && (len_dest + i) < (size - 1))
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dest[] = "dani";
	char	src[] = "elle";
	size_t	result;
	result = ft_strlcat(dest, src, 7);
	printf("%zu", result);
}
*/
