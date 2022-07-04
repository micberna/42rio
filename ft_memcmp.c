/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:04:09 by micberna          #+#    #+#             */
/*   Updated: 2022/07/01 20:57:04 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while (i < n)
	{
		diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
