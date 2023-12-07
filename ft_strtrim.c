/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:48:44 by csouita           #+#    #+#             */
/*   Updated: 2023/12/07 09:28:20 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		str[256];
	char	*trimmed;

	i = 0;
	ft_bzero(str, sizeof(int) * 256);
	while (set[i])
	{
		str[(int)(set[i])] = 1;
		i++;
	}
	i = 0;
	while (str[(int)s1[i]] && s1[i])
		i++;
	j = ft_strlen(s1);
	while (str[(int)s1[j - 1]] && i < j)
		j--;
	trimmed = malloc(sizeof(char) * (j - i + 1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s1 + i, j - i);
	trimmed[j - i] = '\0';
	return (trimmed);
}
