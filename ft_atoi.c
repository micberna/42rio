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
    
    if (str[0] == '-') // para os casos que tiverem sinal "-" na frente e vai ler a partir da segunda posição
    {
        c = -1;
        g++;
    }
    if (str[0] == '+') // para os casos que tiverem sinal "+" na frente na frente e vai ler a partir da segunda posição
    {
        c = 1;      
        g++;
    }
    while (str[g] != '\0')
    {
        b = (str[g] - '0'); // a subtração '0'fornece o valor inteiro de qualquer dígito de caractere que você tenha.
        if (b < 0 || b > 9) //tudo o que não for numero vai retornar i
            return i;
        i = i * 10 + b; // senão i vai levar o valor de 0*10+b
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
    char test5[] = "2ff34";
	char test6[] = "+6543";
	char test7[] = " f";
	char test8[] = "fdd";

    int a = ft_atoi(test1);
    int b = atoi(test1);
    int c = ft_atoi(test2);
    int d = atoi(test2);
	int e = ft_atoi(test3);
	int f = atoi(test3);
	int g = ft_atoi(test4);
	int h = atoi(test4);
	int i = ft_atoi(test5);
	int j = atoi(test5);
    int k = ft_atoi(test6);
    int l = atoi(test6);
    int m = ft_atoi(test7);
    int n = atoi(test7);
    int o = ft_atoi(test8);
    int p = atoi(test8);

    
    printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    return 0;
