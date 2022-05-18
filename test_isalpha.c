#include<stdio.h>
#include "libft.h"
#include<ctype.h>

int ft_isalpha(int c);

int main()
{
	char a;
	a = 's';
	char b;
	b = '1';

int result;
int result2;
int result3;
int result4;

result = ft_isalpha(b);
result2 = isalpha(b);
result3 = ft_isalpha(a);
result4 = isalpha(a);
	printf("minha funçao: %d funçao original: %d\n",result, result2);
	printf("minha funçao: %d funçao original: %d\n",result3, result4);

return (1);
}

