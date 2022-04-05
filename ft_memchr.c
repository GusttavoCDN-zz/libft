/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:05:35 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/04 21:41:03 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s;

	s = (void *)str;
	while (n)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return (s);
		s++;
		n--;
	}
	return ((void *) 0);
}
