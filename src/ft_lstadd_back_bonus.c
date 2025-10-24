/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:23:22 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/22 19:35:07 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	char *contentValue;
	t_list	*current;
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	*new;

	new = ft_lstnew((char *) "ultimo node");
	if (!new)
		return (1);
	a.content = (char *)"node 1";
	b.content = (char *)"node 2";
	c.content = (char *)"node 3";

	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	current = &a;
	while(current)
	{
		contentValue = (char *)(current->content);
		printf("%s\n", contentValue);
		current = current->next;
	}

	current = &a;

	printf("\n");
	ft_lstadd_back(&current, new);

	while(current)
    {
        contentValue = (char *)(current->content);
        printf("%s\n", contentValue);
        current = current->next;
    }
	free(new);
}
*/
