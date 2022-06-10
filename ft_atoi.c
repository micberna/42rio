/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/06/09 22:28:57 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  int atoi(const char *str); converte uma string em um inteiro
 *  Converte a string de entrada para o tipo int e a retorna.
 *  Retorna 0 se a função não puder converter a entrada em um valor 
 *  do tipo int. O valor de retorno é indefinido em caso de estouro.
 *  O valor da string de str não pode ser alterado. 
 *  (Ex. O valor da string não pode ser alterado como str = "asdf".)
 *  corresponde ao índice, menos é o sinal e resultado corresponde
 *  ao valor do resultado convertido em int.
 *  Somente ponteiros podem ser alterados.
 *  (Ex. O valor do ponteiro pode ser alterado como str++.)*/
int ft_atoi(const char *str)
{
	int i;
	int	minus;
	int	result;
	int b;

	i = 0; // indice
	b = 0; //valor analisado
	minus = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	//espaços aleatório - white space - is space
	//Quando está vazio, a instrução while é retornada continuamente. 
	//Neste momento, se um caractere diferente de um espaço for encontrado, 
	//a instrução while será encerrada.


	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	//Quando um caractere diferente de um espaço é encontrado, o sinal
	//desse tempo é julgado. Se o sinal for -, então menos * (-1).
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = (str[i] - 48);
		result = (result * 10 + b);
		i++;

		// Somente quando str é '0' ~ '9', a instrução while é executada para
		// obter o valor do resultado. Se um caractere diferente de um 
		// caractere numérico for encontrado, a instrução while será encerrada
		// automaticamente.
		//O valor do resultado é multiplicado por menos para determinar o 
		//sinal e, em seguida, o valor é retornado.
	}
	return (result * minus);
}
#include <stdio.h>
#include <string.h>
 #include <stdlib.h>

int main () {
    char test1[] = "2ff34";
    char test2[] = "+6543";
    char test3[] = "-1]234";
    char test4[] = "-9B123";
    char test5[] = "";
	char test6[] = "+-12";
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
}
