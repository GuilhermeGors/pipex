/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:41:37 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/15 15:53:16 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	if (size > 0)
	{
		while (src[index] && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	while (src[index])
		index++;
	return (index);
}

/*#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[20];
	unsigned int	result;

	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("Destino: %s\n", dest);
	printf("Tamanho da origem: %u\n", result);
	return (0);
}*/