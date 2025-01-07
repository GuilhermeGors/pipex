/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:41:31 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 11:10:11 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    
    printf("base: %s\n", str1);
    ft_bzero(str1 + 6, 6);
    printf("ft_bzero: %s\n", str1);
    printf("\nbase: %s\n", str2);
    bzero(str2 + 6, 6);
    printf("bzero: %s\n", str2);

    return 0;
}*/