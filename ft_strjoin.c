/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:48:04 by csouita           #+#    #+#             */
/*   Updated: 2023/12/07 18:17:20 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	ls1;
	size_t	ls2;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = malloc(sizeof(char) * (ls1 + ls2) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ls1);
	ft_memcpy((str + ls1), s2, ls2);
	str[ls1 + ls2] = '\0';
	return (str);
}
