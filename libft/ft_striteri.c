/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 02:13:37 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/12 02:26:12 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s && s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void apply_toupper(unsigned int index, char *c)
{
    *c = ft_toupper(*c); 
}
int main(void)
{
    char str[] = "gold fish";

    ft_striteri(str, apply_toupper);

    printf("%s\n", str);

    return 0;
}
*/