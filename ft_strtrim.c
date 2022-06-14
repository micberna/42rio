/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/06/14 19:53:19 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	find_start_end_index(char const *s1, char const *set, int *i, int *j)
{
	int	run;

	run = 1;
	while (*i <= *j && run)
	{
		run = 0;
		if (ft_strchr(set, s1[*i]))
			run = ++(*i);
		if (ft_strrchr(set, s1[*j]))
			run = (*j)--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*buffer;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	find_start_end_index(s1, set, &i, &j);
	size = j - i + 1;
	if (size <= 0)
		return (ft_strdup(""));
	buffer = ft_substr(s1, i, size);
	if (!buffer)
		return (NULL);
	return (buffer);
}
