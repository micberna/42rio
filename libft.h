/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micberna <micberna@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 20:35:14 by micberna          #+#    #+#             */
/*   Updated: 2022/06/02 21:36:29 by micberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isprint(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_toupper(int c);
size_t  ft_strlen(char *str);
char *ft_strchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
#endif
