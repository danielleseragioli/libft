/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:33:29 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/21 11:34:28 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*haystack;
	size_t			little_len;

	haystack = (char *)big;
	little_len = ft_strlen(little);
	if (*little == '\0')
		return (haystack);
	while (*haystack && len >= little_len)
	{
		if (ft_strncmp(haystack, little, little_len) == 0)
			return (haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char haystack[] = "o pastel de feira é bom demais";
	char needle[] = "bom";
	size_t	less_len = 17;
	size_t	enough_len = 30;
	char	*result1;
	char	*result2;

	result1 = ft_strnstr(haystack, needle, less_len);
	printf("nao encontra dentro do limite passado --> %s\n", result1);
	result2 = ft_strnstr(haystack, needle, enough_len);
	printf("encontra dentro do limite passado --> %s", result2);
}
*/
