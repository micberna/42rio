#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack || !needle)
		return ((char *)(haystack));
	if (!haystack || needle[0] == '\0')
		return ((char *)(haystack));
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j]
			&& i + j < len && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}



#include<stdio.h>
#include<ctype.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

int main()
{
  const  char  * maior =  "Foo Bar Baz" ; 
  const  char  * menor =  "Bar" ; 
  char  * ptr ;
  char * ptr2;
	
	printf("minha funçao: %d funçao original: %d\n",strnstr(*maior, *menor, 4); ft_strnstr(*maior, *menor, 4);
	printf("minha funçao: %d funçao original: %d\n",strnstr(*maior, *menor, 10); ft_strnstr(*maior, *menor, 10);
	return (1);
}*/
