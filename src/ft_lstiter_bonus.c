/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:29:45 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/23 16:37:21 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current != NULL)
	{
		(*f)(current->content);
		current = current->next;
	}
}
/*
static void ft_show_content(void *content)
{
        printf("%s\n", (char *)(content));
}

int     main(void)
{
        t_list *a;
        t_list *b;
        t_list *c;
        t_list *first;

        char *str1;
        char *str2;
        char *str3;

        str1 = ft_strdup("node 1");
        str2 = ft_strdup("node 2");
        str3 = ft_strdup("node 3");
        
		if (!str1 || !str2 || !str3)
                return (1);
        
		a = ft_lstnew(str1);
        b = ft_lstnew(str2);
        c = ft_lstnew(str3);
        if (!a)
        {
                free(str1);
                return (1);
        }
        if (!b)
        {
                free(str2);
                return (1);
        }
        if (!c)
        {
                free(str3);
                return (1);
        }
        a -> next = b;
        b -> next = c;
        c -> next = NULL;
        first = a;
        ft_lstiter(a, ft_show_content);
}
*/
