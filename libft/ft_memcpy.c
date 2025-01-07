/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 04:28:13 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 13:46:54 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*source;

	if (!dest && !src)
		return (NULL);
	dst = (char *)dest;
	source = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}

/*

#include <stdio.h>

int main(void)
{
	char source[] = "Hello, World!";
	char dest[20];

	ft_memcpy(dest, source, strlen(source) + 1);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", dest);
	
	return 0;
}
*/