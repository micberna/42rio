/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/07/01 23:16:01 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (len > ft_strlen(s))
		d = (char *)malloc(ft_strlen(s) + 1);
	else
		d = (char *)malloc(len + 1);
	if (!d)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start & j < len)
			d[j++] = s[i];
		i++;
	}
	d[j] = '\0';
	return (d);
}
