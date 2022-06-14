/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:27:34 by micberna          #+#    #+#             */
/*   Updated: 2022/06/14 19:25:17 by micberna         ###   ########.fr       */
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
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
