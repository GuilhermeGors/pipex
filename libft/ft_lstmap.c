/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:47:56 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 19:03:57 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*value;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		value = f(lst->content);
		new_elem = ft_lstnew(value);
		if (!new_elem)
		{
			del(value);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>

void	*double_value(void *content)
{
	int	*new_value = malloc(sizeof(int));
	if (!new_value)
		return (NULL);
	*new_value = *(int *)content * 2;
	return (new_value);
}

void	del(void *content)
{
	free(content);
}
void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d\n", *(int *)list->content);
		list = list->next;
	}
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*new_list;
	int	arr[] = {1, 2, 3, 4, 5};
	int	i;

	for (i = 0; i < 5; i++)
	{
		t_list *new_node = ft_lstnew(&arr[i]);
		if (!new_node)
			return (1);
		ft_lstadd_back(&list, new_node);
	}
	new_list = ft_lstmap(list, double_value, del);

	printf("new list 2xvalues:\n");
	print_list(new_list);

	ft_lstclear(&list, del);
	ft_lstclear(&new_list, del);
	return (0);
}*/