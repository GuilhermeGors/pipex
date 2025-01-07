/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 04:26:33 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 11:16:41 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int test_chars[] = {65, 128, 0, 127, -1, 200};
	size_t i;

	printf("Test ft_isascii:\n");
	for (i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++)
	{
		if (ft_isascii(test_chars[i]))
			printf("%d is a ASCII.\n", test_chars[i]);
		else
			printf("%d is not a ASCII.\n", test_chars[i]);
	}

	return (0);
}*/