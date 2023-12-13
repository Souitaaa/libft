/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:48:35 by csouita           #+#    #+#             */
/*   Updated: 2023/12/12 16:33:38 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	if (str[i] == c)
		return (str + i);
	while (str[i] != c && i > 0)
		i--;
	if (str[i] == str[0] && str[i] != c)
		return (NULL);
	return (str + i);
}
// int main()
// {
// 	char *result ;
// 	char *result2 ;
// 	result = ft_strrchr("souita",'k');
// 	result2 = strrchr("souita",'k');
// 	printf("%s",result) ;
// 	printf("%s-",result2) ;

// 	return (0);
// }