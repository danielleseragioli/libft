/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:46:19 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/14 17:45:18 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str_store;
	size_t			i;

	i = 0;
	str_store = (unsigned char *) s;
	while (i < n)
	{
		str_store[i] = '\0';
		i++;
	}
}
/*
#include <stdio.h>
int main(void)
{
	char	str[] = "danielle";

	printf("Antes do ft_bzero: \"%s\"\n", str);
	ft_bzero(str, 5);
	printf("Depois do ft_bzero: \"%s\"\n", str);

	return (0);
}
*/
