/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:10:22 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/20 10:38:10 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_str;
	char	*sub_str;

	len_str = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= len_str)
		return (ft_calloc(1, sizeof(char)));
	if (len > len_str - start)
		len = len_str - start;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
int	main(void)
{
	char 		*result;
	size_t		start = 3;
	size_t		len = 10;
	const char	s[] = "abacaxi";

	result = ft_substr(s, start, len);
	printf("%s", result);
}
*/
