/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 02:26:52 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/12 02:30:51 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    ft_putchar_fd('F', 1);
    ft_putchar_fd('i', 1);
    ft_putchar_fd('s', 1);
    ft_putchar_fd('h', 1);
    ft_putchar_fd('4', 1);
    ft_putchar_fd('2', 1);
    ft_putchar_fd('\n', 1);
    return 0;
}
*/