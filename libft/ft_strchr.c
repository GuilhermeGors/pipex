/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:56:36 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/08 03:14:38 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char 	str[] = "peixe";
	char 	c = 'i';
	
	printf("string: %s\npointer: %s\n", str, strchr(str, c));
	printf("\nstring: %s\npointer: %s\n", str, ft_strchr(str, c));
}*/