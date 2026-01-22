/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:32:30 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/23 14:09:36 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
/*
static void del_content(void *content)
{
    free(content);
}

int	main(void)
{
	t_list  *n1;
    t_list  *n2;
    t_list  *n3;
    t_list  *first;
    char    *s1;
    char    *s2;
    char    *s3;

    s1 = ft_strdup("node 1");
    s2 = ft_strdup("node 2");
    s3 = ft_strdup("node 3");
    if (!s1 || !s2 || !s3)
        return 1;

    n1 = ft_lstnew(s1);
    n2 = ft_lstnew(s2);
    n3 = ft_lstnew(s3);
    if (!n1 || !n2 || !n3)
        return 1;

    n1->next = n2;
    n2->next = n3;

	first = n1;
    printf("ANTES--> first aponta para: %p\n", (void *)first);

    ft_lstclear(&first, del_content);

    printf("DEPOIS--> first  aponta para: %p\n", (void *)first);
}
*/
