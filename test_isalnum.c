#include<stdio.h>
#include "libft.h"
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
}

