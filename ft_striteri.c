/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:47:00 by csouita           #+#    #+#             */
/*   Updated: 2023/12/04 20:46:57 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
// void	uppercase(unsigned int i, char *c)
// {
// 	while (c[i])
// 	{
// 		if (c[i] >= 'a' && c[i] <= 'z')
// 		{
// 			c[i] -= 32;
// 		}
// 		i++;
// 	}
// }
// int main ()
// {
// 	char c[] = "souita" ;
// 	ft_striteri(c ,uppercase) ;
// 	printf("%s",c );
// 	return (0);
// }