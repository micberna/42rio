/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/06/07 19:28:52 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// A  memset - preenche a memória com um byte constante
//        A função memset () preenche os primeiros n bytes da área de memória
//        apontado por s com o byte constante c 
#include "libft.h"//estou usando a libft.h devido a função size_t
void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;	

	i = 0;
	while (i < len)
	{
		(((unsigned char *)b)[i] = (unsigned char)c);
		i++;
	}

	return (b);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
   	char s1zero[] = "michelle";
	char s2zero = 'z';
	char s3zero[] = "michelle";
	char s4zero = 'z';
	
	ft_memset(s1zero, s2zero, 3);
	memset(s3zero, s4zero, 3);
	
	printf("%s -- minha funçao\n%s - funçao original\n", s1zero, s3zero);
}
