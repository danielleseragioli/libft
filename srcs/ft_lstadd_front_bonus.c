/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:08:32 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/22 12:49:35 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	char	*node_content_value;
	t_list	*current;
	t_list  a;
    t_list  b;
    t_list  c;
    t_list  new;
    
	a.content = (char *)"estou no node A(1)";
    b.content = (char *)"estou no node B(2)";
    c.content = (char *)"estou no node C(3)";
    new.content = (char *)"estou no node NEW(0)";
    
	a.next = &b;
    b.next = &c;
    c.next = NULL;
    current = &a;
    while (current)
    {
		node_content_value = (char *)(current->content);
        printf("%s\n", node_content_value);
        current = current->next;
    }
    printf("\n");
        
	current = &a;
    ft_lstadd_front(&current, &new);
    while (current)
    {
		node_content_value = (char *)(current->content);
        printf("%s\n", node_content_value);
        current = current->next;
    }
}
*/
