/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:39:07 by dseragio          #+#    #+#             */
/*   Updated: 2026/01/22 14:51:44 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//flag to choose which str wil be freed (1 = s1, 2 = s2, 3 = both, 0 = none)
char	*ft_strjoin(char *s1, char *s2, int flag_free)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
		return (ft_strdup(s2));
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (free(s1), NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	if (flag_free - 2 >= 0)
	{
		flag_free -= 2;
		free(s2);
	}
	if (flag_free == 1)
		free(s1);
	return (str);
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
