/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:06:14 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/22 21:13:03 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del != NULL)
		del(lst->content);
	free(lst);
}
/*
void delnode(void *content)
{
	free(content);
}
int   main(void)
{
        t_list *a;
        char *str;
        str = ft_strdup("abacaxii piui");
        if (!str)
                return (1);
        a = ft_lstnew(str);
        if (!a)
        {
                free(str);
                return (1);
        }
        printf("Antes ft_lstdelone: %s\n", (char *)a->content);
        ft_lstdelone(a, delnode);
        printf("Depois de ft_lstdelone, nó liberado");
        return (0);
}
*/
