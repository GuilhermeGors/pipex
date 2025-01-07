/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:00:53 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 11:14:49 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char test_chars[] = {'a', 'Z', '5', '#', ' ', '9', 'G'};
	size_t i;

	printf("Test ft_isalpha:\n");
	for (i = 0; i < sizeof(test_chars); i++)
	{
		if (ft_isalpha(test_chars[i]))
			printf("'%c' is letter.\n", test_chars[i]);
		else
			printf("'%c' is not a letter.\n", test_chars[i]);
	}

	return (0);
}*/