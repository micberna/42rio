/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/06/13 20:43:26 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map_str;

	i = 0;
	if (!s || !f)
		return (NULL);
	map_str = malloc(ft_strlen(s) + 1);
	if (!map_str)
		return (NULL);
	while (s[i])
	{
		map_str[i] = (*f)(i, s[i]);
		i++;
	}
	map_str[i] = '\0';
	return (map_str);
}
