#include<stdio.h>
#include "libft.h"
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
}

