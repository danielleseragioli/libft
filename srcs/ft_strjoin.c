/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:39:07 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/20 11:42:59 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str_join;

	i = 0;
	j = 0;
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str_join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_join)
		return (NULL);
	while (s1[i])
	{
		str_join[i] = s1[i];
		i++;
	}
	while (s2[j])
		str_join[i++] = s2[j++];
	str_join[i] = '\0';
	return (str_join);
}
/*
int	main(void)
{
	const char s1[] = "abacaxi ";
	const char s2[] = "com chocolate";
	char *result;
	result = ft_strjoin(s1, s2);
	printf("%s", result);
	free(result);
	return (0);
}
*/
