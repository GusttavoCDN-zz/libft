/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:05:05 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/06 13:57:37 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*s1 != '\0') && n > 1)
	{
		if (*s1 != *s2)
			break ;
		n--;
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

static size_t	s_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_size;

	i = 0;
	l_size = s_strlen(little);
	if (!l_size)
		return ((char *) big);
	while (big[i] && (i + l_size <= len) && (len != 0))
	{
		if (big[i] == little[0])
		{
			if (!s_strncmp(&big[i], little, l_size))
				return ((char *)&big[i]);
		}
		i++;
	}
	return ((void *) 0);
}
