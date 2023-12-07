/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:47:52 by csouita           #+#    #+#             */
/*   Updated: 2023/12/07 17:30:50 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
// int main()
// {
// 	char x[10] = "souita";
// 	ft_memset(x,'x',0);
// // 	printf("%s\n",x);
// // 	int i[4] = {1,23,3,45};
// // 	ft_memset(i,2,2);
// // 	printf("%d ",i[0]);
// // 	printf("%d ",i[1]);
// // 	printf("%d ",i[2]);
// // 	printf("%d ",i[3]);
// }