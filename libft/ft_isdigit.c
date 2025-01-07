/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:05:20 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 14:00:30 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*

#include <stdio.h>

int	main(void)
{
	int test_chars[] = {'0', '5', '9', 'a', 'Z', 47, 58};
	size_t i;

	printf("Test ft_isdigit:\n");
	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
		if (ft_isdigit(test_chars[i]))
			printf("%c is a digit.\n", test_chars[i]);
		else
			printf("%c is not a dígito.\n", test_chars[i]);
	}

	return (0);
}*/