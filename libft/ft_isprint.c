/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 04:25:08 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/18 17:28:21 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int test_chars[] = {31, 32, 65, 97, 126, 127};
	size_t i;

	printf("Test ft_isprint:\n");
	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
		if (ft_isprint(test_chars[i]))
	printf("%c' (ASCII %d) is printable\n", test_chars[i], test_chars[i]);
		else
			printf("ASCII %d is not printable\n", test_chars[i]);
	}

	return (0);
}*/