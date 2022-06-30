/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/06/29 22:12:12 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != 0)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	size_t	i;
	char	**mall;
	size_t	start;

	j = 0;
	i = 0;
	if (!(s))
		return (0);
	mall = ft_calloc(count(s, c) + 1, sizeof(char *));
	if (!mall)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			mall[j++] = ft_substr(s + start, 0, i - start);
	}
	return (mall);
}
