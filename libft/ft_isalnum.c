/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:32:39 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 14:00:45 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char test_chars[] = {'a', 'Z', '5', '#', ' ', '9', 'G'};
	size_t i;

	printf("test ft_isalnum:\n");
	for (i = 0; i < sizeof(test_chars); i++)
	{
		if (ft_isalnum(test_chars[i]))
			printf("'%c' is alfanumérico.\n", test_chars[i]);
		else
			printf("'%c' is not alfanumérico.\n", test_chars[i]);
	}
	return (0);
}*/