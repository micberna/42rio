/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:42:59 by micberna          #+#    #+#             */
/*   Updated: 2022/05/25 19:06:43 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função strchr () retorna um ponteiro para a primeira ocorrência do
// caractere c na string s//
// sinopse
// #include <string.h>
// char *strchr(const char * s , int c ); 

char	*ft_strchr(const char *s, int c);
{
	char *str;
	str = (char *)s;
   	while (*str != c);
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;

	return (str);
}
