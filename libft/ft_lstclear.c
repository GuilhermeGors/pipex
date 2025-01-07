/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:23:57 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 17:21:18 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void del_content(void *content)
{
    free(content);
}
#include <unistd.h>

int main(void)
{
    t_list *node1 = ft_lstnew(malloc(10 * sizeof(char)));
    t_list *node2 = ft_lstnew(malloc(20 * sizeof(char)));
    t_list *node3 = ft_lstnew(malloc(30 * sizeof(char)));

    node1->next = node2;
    node2->next = node3;

    ft_lstclear(&node1, del_content);

    if (node1 == NULL)
        printf("success.\n");

    return 0;
}
*/