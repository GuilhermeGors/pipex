/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:38:27 by gugomes-          #+#    #+#             */
/*   Updated: 2025/01/07 13:08:31 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t nsize)
{
	size_t	size;
	void	*block;

	if (num == 0 || nsize == 0)
		return (malloc(1));
	size = num * nsize;
	if (nsize != 0 && size / nsize != num)
		return (NULL);
	block = malloc(size);
	if (!block)
		return (NULL);
	ft_memset(block, 0, size);
	return (block);
}

/*
#include <stdio.h>

int main(void)
{
    int *arr;
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    
    arr = (int *)ft_calloc(num_elements, element_size);
    if (!arr)
    {
        printf("memory allocation fail.\n");
        return (1);
    }
    printf("ft_calloc content:\n");
    for (size_t i = 0; i < num_elements; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);ss
    return 0;
}*/