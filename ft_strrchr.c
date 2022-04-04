/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:05:53 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/04 17:38:59 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	size_t	size;

	s = (char *) str + (ft_strlen(str));
	if (!c)
		return (s);
	size = ft_strlen(str) + 1;
	while (0 < size)
	{
		if ((unsigned char) *s == (unsigned char) c)
			return (s);
		size--;
		s--;
	}
	return ((void *) 0);
}
