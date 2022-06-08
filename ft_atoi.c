/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/06/07 21:35:39 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  int atoi(const char *str); converte uma string em um inteiro
//  temos que lidar comm algumas questões:
//  espaço (32)
//  nova linha 
#include "libft.h"//estou usando a libft.h devido a função size_;

int ft_atoi(const char *str)
{
    int i = 0; //contém todo o número analisado
	int b = 0; // valor atual analisado
    int c = 1; // 
    int g = 0;
    
    if (str[0] == '-')
    {
        c = -1;
        g++;
    }
    if (str[0] == '+')
    {
        c = 1;      
        g++;
    }
    while (str[g] != '\0')
    {
        b = (str[g] - '0');
        if (b < 0 || b > 9)
            return i;
        i = i * 10 + b;
        g++;
    }
    return c * i;
}

#include <stdio.h>
#include <string.h>
 #include <stdlib.h>

int main () {
    char test1[] = "2ff34";
    char test2[] = "+6543";
    char test3[] = "-1]234";
    char test4[] = "-9B123";
    char test12[] = "2ff34";
	char test22[] = "+6543";
	char test5[] = " f";
	char test6[] = "fdd";

    int a = ft_atoi(test1);
    int b = ft_atoi(test2);
    int c = ft_atoi(test3);
    int d = ft_atoi(test4);
	int e = atoi(test12);
	int f = atoi(test22);
	int g = ft_atoi(test5);
	int h = ft_atoi(test6);
	int i = atoi(test5);
	int j = atoi(test6);
    
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f, g, h, i, j);
    return 0;
}
