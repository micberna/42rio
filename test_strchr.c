
#include "libft.h"
#include<ctype.h>
#include<string.h>

char *ft_strchr(const char *s, int c);


int main()
{
	const char *str = "Michelle";
	char  x;
	x = 'e';
	char y;
	y = 'd';

	int result;
	int result2;
	int result3;
	int result4;

	result = *ft_strchr(str, x);
	result2 = strchr(str, x);
	result3 = *ft_strchr(str, y);
	result4 = strchr(str, y);

	printf("minha funçao: : %c funçao original %c\n", result, result2);
	printf("minha funçao: : %c funçao original %c\n", result3, result4);

return (1);
}

