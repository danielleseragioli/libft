/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:39:02 by dseragio          #+#    #+#             */
/*   Updated: 2026/01/22 15:32:20 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptrprint(void *ptr)
{
	int	result;

	result = 0;
	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", 1));
	else
		result += ft_putstr_fd("0x", 1);
	result += ft_hexprint((unsigned long int) ptr, 0);
	return (result);
}
/*
int	main(void)
{
	int n = 255;

	printf("%d", ft_ptrprint(&n));
}
*/
