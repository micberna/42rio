/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:43:45 by micberna          #+#    #+#             */
/*   Updated: 2022/06/13 20:40:19 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			(((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1]);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]);
			i++;
		}
	}
	return (dst);
}
