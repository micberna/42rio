#include<stdio.h>
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
}

