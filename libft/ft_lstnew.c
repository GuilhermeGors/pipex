/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:12:50 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 17:24:05 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*name;

	name = (t_list *)malloc(sizeof(t_list));
	if (!name)
		return (NULL);
	name->next = NULL;
	name->content = content;
	return (name);
}

/*
#include <stdio.h>

int main(void)
{
    int value = 42;
    t_list *new_node = ft_lstnew(&value);

    if (new_node == NULL)
    {
        printf("Fail to create node.\n");
        return 1;
    }
    printf("new content on node: %d\n", *(int *)new_node->content);
    free(new_node);
    return 0;
}*/