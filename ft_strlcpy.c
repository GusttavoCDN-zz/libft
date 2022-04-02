/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:35:28 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/02 16:30:55 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	static_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	i;

	if (!dst || !src)
		return (0);
	length = static_strlen(src);
	if (size <= 0)
		return (length);
	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
