/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:13:46 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/25 13:08:00 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
	{
		if ((unsigned char) *s == (unsigned char) c)
			return (s);
		s++;
	}
	if (!c && !(*s))
		return (s);
	return ((void *) 0);
}
