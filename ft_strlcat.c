/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:46:43 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/04 14:52:51 by guda-sil@st      ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	f_len;

	f_len = static_strlen(dst) + static_strlen(src);
	i = static_strlen(dst);
	j = 0;
	if (size > i)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (f_len);
	}
	return (static_strlen(src) + size);
}
