/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:24:23 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/22 20:26:12 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	if (size && (total / size != nmemb))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
#include <stdio.h>
int main(void)
{
    int *ptr= ft_calloc(5, sizeof(int));
    if (!ptr)
        return (1);
    printf("calloc:%d%d%d%d%d\n",ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]);
    free(ptr);
    return (0);
}
*/
