/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:16:21 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/22 15:43:19 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	d;
	t_list	*last;

	a.content = (char *)"node 1";
	b.content = (char *)"node 2";
    c.content = (char *)"node 3";
    d.content = (char *)"ultimo node";

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
	last = ft_lstlast(&a);

	if (last)
		printf("%s\n", (char *)last->content);
	return (0);
}
*/
