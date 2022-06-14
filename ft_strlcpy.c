/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:04:09 by micberna          #+#    #+#             */
/*   Updated: 2022/06/13 20:40:40 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A função copia o valor da sting SRC(origem) e cola na des(destino) e 
//o retorno precisa ser o tamanho de src(origem)

#include "libft.h"

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
	{
		c++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}
