/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:08:06 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/21 12:14:39 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

/*
static void go_next(unsigned int i, char* c)
{
	(void)i;
	*c = *c + 1;
}

int	main()
{
	char text[] = "abcd";
	ft_striteri(text, go_next);

	printf("Result:   %s\n", text);
}
*/
