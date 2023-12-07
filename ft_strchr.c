/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:47:55 by csouita           #+#    #+#             */
/*   Updated: 2023/12/02 12:17:51 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (s[i] != (char)c)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (str + i);
}
// int main ()
// {
// 	char *result ;
// 	result  =  (ft_strchr("souitsa",'s')) ;
// 	printf("%s",result) ;
// }