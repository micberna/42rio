/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/06/14 18:46:34 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*#include<stdio.h>
#include "libft.h"
#include<ctype.h>

int ft_isascii(int c);

int main()
{
   	char a;
   	a = 's';
	float b;
	b = 178;
	int result;
	int result2;
	int result3;
	int result4;

	result = ft_isascii(b);
	result2 = isascii(b);
	result3 = ft_isascii(a);
	result4 = isascii(a);
	printf("minha funçao: %d funçao original: %d\n",result, result2);
   	printf("minha funçao: %d funçao original: %d\n",result3, result4);

	return (1);
}*/
