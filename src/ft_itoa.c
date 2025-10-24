/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:25:26 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/17 18:28:31 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	num_len(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, long nbr, int len)
{
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return ;
	}
	while (nbr != 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = num_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	fill_str(str, (long)n, len);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *result;
    result = ft_itoa(42); 

    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    } 
	else
        printf("Falha na alocação de memória.\n");

    result = ft_itoa(-2147483648);
    if (result != NULL)
    {
        printf("%s\n", result);
        free(result);
    }
    
    return 0;
}
*/
