/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:30:06 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 12:18:08 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;

	new1 = ft_lstnew("First");
	new2 = ft_lstnew("Second");
	new3 = ft_lstnew("Third");

	new1->next = new2;
	new2->next = new3;

	list = new1;

	print_last(list);
	list = NULL;
	print_last(list);

	free(new1);
	free(new2);
	free(new3);

	return (0);
}
*/