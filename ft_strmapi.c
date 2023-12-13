/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:27:19 by csouita           #+#    #+#             */
/*   Updated: 2023/12/13 19:39:34 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// static char uppercase(unsigned int i , char c )
// {
// 	if ( c >= 'a' && c <= 'z' )
// 	{
// 	printf("str[%d] = %c\n",i,c);
// 		c -=32 ;
// 	}
// 	return (c);
// }
// int main()
// {
//     char str[] = "souita";
//     char *result;

//     result = ft_strmapi(str, uppercase);
//     if (result)
//     {
//         printf("Original string: %s\n", str);
//         printf("Uppercase string: %s\n", result);

//         free(result);
//     }
//     else
//     {
//         printf("Error: Memory allocation failed.\n");
//     }

//     return (0);
// }