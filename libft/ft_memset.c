/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:05:37 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/07 23:19:16 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
		((unsigned char *)s)[index++] = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t  i = 2;

	char s[] = "peixe";
	int	ascii = 97;

	memset(s, ascii, i);
	printf("retorno: %s\n", s);
}
*/