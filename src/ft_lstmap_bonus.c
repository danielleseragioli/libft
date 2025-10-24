/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:39:59 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/23 17:54:11 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_lst;
	t_list	*new_lst;
	t_list	*new_node;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	current_lst = lst;
	new_lst = NULL;
	while (current_lst)
	{
		temp = (*f)(current_lst->content);
		new_node = ft_lstnew(temp);
		if (new_node == NULL)
		{
			del(temp);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		current_lst = current_lst->next;
	}
	return (new_lst);
}
/*
void *duplica(void *content)
{
    int *new = malloc(sizeof(int));
    if (!new)
        return NULL;
    *new = *(int *)content * 2;
    return new;
}

int main(void)
{
    t_list  *lst;
    t_list  *n1;
    t_list  *n2;
    t_list  *new_lst;
    t_list  *tmp;

    lst = ft_lstnew(malloc(sizeof(int)));
    n1  = ft_lstnew(malloc(sizeof(int)));
    n2  = ft_lstnew(malloc(sizeof(int)));

    *(int *)lst->content = 1;
    *(int *)n1->content = 2;
    *(int *)n2->content = 3;

    ft_lstadd_back(&lst, n1);
    ft_lstadd_back(&lst, n2);

	printf("Lista original:\n");
	tmp = lst;
	while (tmp)
	{
    	printf("%d\n", *(int *)tmp->content);
    	tmp = tmp->next;
	}

    new_lst = ft_lstmap(lst, duplica, free);

	printf("\nnova listaaaa \n");
    tmp = new_lst;
    while (tmp)
    {
        printf("%d\n", *(int *)tmp->content);
        tmp = tmp->next;
    }

    ft_lstclear(&lst, free);
    ft_lstclear(&new_lst, free);

    return 0;
}
*/
