/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:53:48 by csouita           #+#    #+#             */
/*   Updated: 2023/12/13 20:52:47 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		ft_putchar_fd('-', fd);
	}
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + 48, fd);
	}
	else
	{
		ft_putchar_fd(num + 48, fd);
	}
}

// int main ()
// {
// 	int fd = open("tet.text",O_RDWR | O_CREAT | O_TRUNC, 0777);
// 	ft_putnbr_fd(34,fd);
// }