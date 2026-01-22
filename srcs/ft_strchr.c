/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:03:28 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/16 20:06:10 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	find;
	size_t	i;

	str = (char *)s;
	find = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == find)
			return (&str[i]);
		i++;
	}
	if (find == '\0')
		return (&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "danielle";
	char *ptr;

	printf("%s\n", strchr(str, 'i'));
	ptr = ft_strchr(str, 'i');

	printf("%s\n", ptr);
}
*/
