/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:14:43 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/16 20:18:48 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	find;
	int		i;

	str = (char *)s;
	find = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == find)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{	char str[] = "danielle";
	char *ptr;

	printf("%s\n", strrchr(str, 'l'));
	ptr = ft_strrchr(str, 'l');

	printf("%s\n", ptr);
}
*/
