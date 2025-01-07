/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:34:41 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/17 11:24:22 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

int	count_digits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	fill_string(char *str, int n, int count, int sign)
{
	str[count--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[count--] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		count;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = is_negative(&n);
	count = count_digits(n) + sign;
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	fill_string(str, n, count, sign);
	return (str);
}
/*

#include <stdio.h>

int	main(void)
{
	int		num = -12345;
	char	*str = ft_itoa(num);

	printf("----------------\n\nitoa: \nnum: %d\nstring: %s\n", num, str);
	free(str);
}
*/