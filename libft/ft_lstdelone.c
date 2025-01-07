/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:07 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 17:22:16 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
#include <stdio.h>


void del_content(void *content)
{
    free(content);
}
int main(void)
{
    t_list *node;
	
    node = malloc(sizeof(t_list));
    if (!node)
        return (1);
    
    node->content = malloc(10 * sizeof(char));
    if (!node->content)
    {
        free(node);
        return (1);
    }
    ft_lstdelone(node, del_content);
    printf("node cleaned.\n");
    return (0);
}*/