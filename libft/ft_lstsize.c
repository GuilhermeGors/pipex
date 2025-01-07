/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:25:55 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 17:24:47 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h

int main(void)
{
    t_list *list = NULL;
    
    int a = 1, b = 2, c = 3;
    ft_lstadd_back(&list, ft_lstnew(&a));
    ft_lstadd_back(&list, ft_lstnew(&b));
    ft_lstadd_back(&list, ft_lstnew(&c));

    int size = ft_lstsize(list);
    
    printf("list size: %d\n", size);
    ft_lstclear(&list, free);
    
    return 0;
}*/