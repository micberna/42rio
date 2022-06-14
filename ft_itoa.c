/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:12:54 by micberna          #+#    #+#             */
/*   Updated: 2022/06/13 20:43:08 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*reverse(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (0);
}

static	void	*intostr(char *str, int n, int negative)
{
	int	i;
	int	rem;

	i = 0;
	while (n != 0)
	{
		rem = n % 10;
		if (rem > 9)
		{
			str[i] = ((unsigned int)rem - 10) + 'a';
		}
		else
		{
			if (rem < 0)
				rem = rem * -1;
			str[i] = (unsigned int)rem + '0';
		}
		n = n / 10;
		i++;
	}
	if (negative)
		str[i++] = '-';
	str[i++] = '\0';
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		negative;

	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = n * -1;
	}
	str = ft_calloc(11 + negative, sizeof(*str));
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	intostr(str, n, negative);
	reverse(str);
	return (str);
}
