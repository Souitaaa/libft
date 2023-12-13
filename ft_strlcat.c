/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:48:08 by csouita           #+#    #+#             */
/*   Updated: 2023/12/13 20:53:59 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	d;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (s);
	else
	{
		while (src[i] && (d + i) < dstsize - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
	}
	dst[d + i] = '\0';
	if (d >= dstsize)
	{
		return (s + dstsize);
	}
	else
		return (d + s);
}
// int main()
// {
// 	int v = ft_strlcat(NULL, NULL , 0);
// 	int v = strlcat(NULL, NULL , 0);
// }