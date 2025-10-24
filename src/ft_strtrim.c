/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:43:31 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/20 18:30:05 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = (ft_strlen(s1) - 1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[i] && ft_strchr(set, s1[j]))
		j--;
	new_str = ft_substr(s1, i, ((j - i) + 1));
	return (new_str);
}
/*
int	main (void)
{
	const char	s1[] = "---*-**piui*abacaxi-piui--*";
	const char	set[] = "-*";
	char 		*result;

	result = ft_strtrim(s1, set);
	printf("%s", result);
}
*/
