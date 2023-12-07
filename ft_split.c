/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:09:02 by csouita           #+#    #+#             */
/*   Updated: 2023/12/07 09:45:27 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words_nbr(const char *str, char s)
{
	int	i;
	int	words_count;
	int	start;

	i = 0;
	words_count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == s)
			i++;
		start = i;
		while (str[i] && str[i] != s)
			i++;
		if (start != i)
			words_count++;
		if (str[i] == '\0')
			return (words_count);
		i++;
	}
	return (words_count);
}

static char	*malloc_word(const char *s, int begin, int end)
{
	int		i;
	char	*str;

	str = (char *)malloc((end - begin + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (begin < end)
	{
		str[i] = s[begin];
		i++;
		begin++;
	}
	str[i] = '\0';
	return (str);
}

static char	**freefun(char **p, int j)
{
	while (j >= 0)
	{
		free(p[j]);
		j--;
	}
	free(p);
	return (NULL);
}

static char	**list(char **lst, const char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			lst[j] = malloc_word(s, start, i);
			if (!lst[j])
				return (freefun(lst, j));
			j++;
		}
		else
			i++;
	}
	lst[j] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = (char **)malloc((words_nbr(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (list(lst, s, c));
}
