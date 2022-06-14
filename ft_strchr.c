/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:42:59 by micberna          #+#    #+#             */
/*   Updated: 2022/06/14 19:12:00 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A função strchr () retorna um ponteiro para a primeira ocorrência do
// caractere c na string s//
// sinopse
// #include <string.h>
// char *strchr(const char * s , int c ); 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)c)
	{	
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
