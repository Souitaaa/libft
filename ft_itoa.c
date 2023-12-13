/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:47:29 by csouita           #+#    #+#             */
/*   Updated: 2023/12/13 20:05:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(int number)
{
	size_t	i;

	i = 1;
	number /= 10;
	while (number)
	{
		i++;
		number /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long int	number;

	number = n;
	len = ft_count_digits(n);
	if (n < 0)
	{
		number *= -1;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = (number % 10) + 48;
		number /= 10;
	}
	if (n < 0)
		*(str) = '-';
	return (str);
}
