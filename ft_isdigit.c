/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:27:49 by micberna          #+#    #+#             */
/*   Updated: 2022/06/04 12:52:54 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include<stdio.h>
#include<ctype.h>

int ft_isdigit(int c);

int main()
{
	char a;
	a = '1';
   	float b;
   	b = 178;

	int result;
	int result2;
	int result3;
	int result4;

	result = ft_isdigit(b);
	result2 = isdigit(b);
	result3 = ft_isdigit(a);
	result4 = isdigit(a);
	printf("minha funçao: %d funçao original: %d\n",result, result2);
	printf("minha funçao: %d funçao original: %d\n",result3, result4);
	return (1);
}*/
