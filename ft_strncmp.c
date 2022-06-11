/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/06/11 17:06:20 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A  int strncmp(const char *str1, const char *str2, size_t n) compara no
//  máximo os primeiros n bytes de str1 e str2   
#include "libft.h"//estou usando a libft.h devido a função size_t

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{		
	size_t	i;	

	i = 0;
	while (((unsigned char *)s1)[i] != '\0' \
		&& ((unsigned char *)s2)[i] != '\0' && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

	int main(void)
	{
	   	char s1zero[] = "michelle";
		char s2zero[] = "michelle";
		char s1maior[] = "zzzzz";
		char s2maior[] = "aaaaa";
		char s1menor[] = "aaaaa";
		char s2menor[] = "zzzzz";
		int resultzero1;
		int resultzero2;
		int resultmaior1;
		int resultmaior2;
		int resultmenor1;
		int resultmenor2;
	
		
		resultzero1 = ft_strncmp(s1zero, s2zero, 2);
		resultzero2 = strncmp(s1zero, s2zero, 2);
		resultmaior1 = ft_strncmp(s1maior, s2maior, 2);
		resultmaior2 = strncmp(s1maior, s2maior, 2);
		resultmenor1 = ft_strncmp(s1menor, s2menor, 2);
		resultmenor2 = strncmp(s1menor, s2menor, 2);
		
		printf("%d - zero - minha funçao\n%d - zero - \
		funçao original\n", resultzero1, resultzero2);
		printf("%d - maior - minha funçao\n%d - maior - funçao original\n",\
	   	resultmaior1,resultmaior2);
		printf("%d - menor - minha funçao\n%d - menor - funçao original\n",\
	   	resultmenor1, resultmenor2);
	}*/
