/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 20:43:45 by micberna          #+#    #+#             */
/*   Updated: 2022/06/04 12:16:39 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = dst;
	if ((size_t) dst < (size_t) src)
		while (len--)
			*((unsigned char *) dst++) = *((unsigned char *) src++);
	else if ((size_t) dst > (size_t) src)
		while (len--)
			((unsigned char *) dst)[len] = ((unsigned char *) src)[len];
	return (tmp);
}