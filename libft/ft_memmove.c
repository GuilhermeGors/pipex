/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 04:29:22 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 13:47:59 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*source;

	if (!dest && !src)
		return (NULL);
	dst = (char *)dest;
	source = (const char *)src;
	if (dst > source)
		while (n--)
			dst[n] = source[n];
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_memmove(dest, src, strlen(src) + 1);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	char overlap_src[] = "Overlap Example";
	printf("\nBefore overlapping move:\n");
	printf("Overlap Source: %s\n", overlap_src);
	ft_memmove(overlap_src + 5, overlap_src, 10);
	printf("After overlapping move:\n");
	printf("Overlap Source: %s\n", overlap_src);
	
	return 0;
}*/