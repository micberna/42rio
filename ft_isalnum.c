/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:43:45 by micberna          #+#    #+#             */
/*   Updated: 2022/06/04 12:16:39 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// uso o stdio para o printf e ctype para a função isalnum
/*#include<stdio.h>
#include<ctype.h>

int ft_isalnum(int c);
int main()
{
	char a;
	a = 's';
	char b;
	b = '~';
	int result;
	int result2;
	int result3;
	int result4;
	result = ft_isalnum(b);
	result2 = isalnum(b);
	result3 = ft_isalnum(a);
	result4 = isalnum(a);
   	printf("minha funçao: %d funçao original: %d\n",result, result2);
	printf("minha funçao: %d funçao original: %d\n",result3, result4);
	return (1);
}*/