/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:56:59 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/20 18:19:16 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_free_split(char **array)
{
	size_t	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_create_word(const char *str, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static	char	**ft_fill_split(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_create_word(&s[i], c);
			if (result[j] == NULL)
			{
				ft_free_split(result);
				return (NULL);
			}
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	return (ft_fill_split(result, s, c));
}
/*
int	main(void)
{
	int	i = 0;
	char	**array = ft_split("=piui=pi=ui=abacaxi=", '=');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	i = 0;
	ft_free_split(array);
	return (0);
}
*/
