/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:48:12 by csouita           #+#    #+#             */
/*   Updated: 2023/12/07 18:33:22 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	i = 0;
	a = ft_strlen(src);
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (dstsize - 1 > i))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (a);
}
// int main ()
// {
// 	char a[] = "souita";
// 	char b[] = "souita";
// 	printf("%zu\n",ft_strlcpy(a,b,3));
// 	//printf("%lu\n",strlcpy(a,b,3));
// }
