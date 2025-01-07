/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:53:37 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/12 10:54:50 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end > start && is_in_set(s1[end], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!trimmed_str)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		trimmed_str[i] = s1[start];
		start++;
		i++;
	}
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char s1[] = "  fish  ";
	char set[] = " ";
	char *s2;

	s2 = ft_strtrim(s1, set);
	printf("Original: '%s'\nTrimmed: '%s'\n", s1, s2);
	free(s2);
	return (0);
}
*/