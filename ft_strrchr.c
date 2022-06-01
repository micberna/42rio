/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/05/31 22:13:29 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 // A função strchr () retorna um ponteiro para a primeira ocorrência do
 // caractere c na string s//
 // sinopse
 // #include <string.h>
 // char *strchr(const char * s , int c ); 
  
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	if s[i]== c
		return ((char *)&s[i]);
	return (NULL);
}
      	



