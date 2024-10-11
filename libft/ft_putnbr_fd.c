/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glapshin <glapshin@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:30:43 by glapshin          #+#    #+#             */
/*   Updated: 2024/10/11 23:17:47 by glapshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// void
// 	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
// void ft_putstr_fd(char *s, int fd)
// {
// 	while(*s)
// 	{
// 		ft_putchar_fd(*s, fd);
// 		s++;
// 	}
// }
// void	ft_putstr_fd(char *s, int fd)
// {
// 	while (*s)
// 	{
// 		ft_putchar_fd(*s, fd);
// 		s++;
// 	}
// }
// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }
void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
// int main()
// {
// 	ft_putnbr_fd(-2147483648, -1);
// 	return 0;
// }
