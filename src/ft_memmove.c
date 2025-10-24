/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:46:25 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/15 14:48:04 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cpy;
	unsigned char	*src_cpy;

	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	if (dest_cpy > src_cpy)
	{
		while (n > 0)
		{
			n--;
			dest_cpy[n] = src_cpy[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char test[] = "ABCDEF";
	ft_memmove(test + 2, test, 0);
	printf("%s", test);
}
*/
