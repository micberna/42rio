/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 22:42:59 by micberna          #+#    #+#             */
/*   Updated: 2022/05/26 21:35:03 by micberna         ###   ########.fr       */
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
	while (*str != c)
	{	
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[] = "michelle";
	char *result;
	char *result2;
	char *result3;
	char *result4;
	char nok;
	char ok;

	nok = 'z';
	ok = 'l';

	result = ft_strchr(str, nok);
	result2 = strchr(str, nok);
	result3 = ft_strchr(str, ok);
	result4 = strchr(str, ok);

	printf("%s - nok - minha funçao\n%s - nok - funçao original\n", result, result2);
	printf("%s - ok - minha funçao\n%s - ok - funçao original\n", result3, result4);
	return (0);
}

