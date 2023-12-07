/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:36:55 by csouita           #+#    #+#             */
/*   Updated: 2023/11/29 16:49:00 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd == -1)
	{
		return ;
	}
	write(fd, s, ft_strlen(s));
}
// int main ()
// {
//     int fd = open("test.txt" , O_RDWR | O_CREAT | O_TRUNC, 0644);
//     ft_putstr_fd("souita",fd) ;
//     return (0);
// }