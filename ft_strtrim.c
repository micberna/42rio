/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/07/01 23:07:06 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	st;
	size_t	end;
	char	*mall;

	if (!s1)
		return (NULL);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	end = ft_strlen(s1);
	while (end > st && ft_strchr(set, s1[end - 1]))
		end--;
	mall = (char *)malloc(sizeof(*s1) * (end - st + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (st < end)
		mall[i++] = s1[st++];
	mall[i] = '\0';
	return (mall);
}
