/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:31:40 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/03/31 19:08:36 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	str = (unsigned char *)s;
	len = 0;
	while (len < n)
		str[len++] = (unsigned char) c;
	str[len] = '\0';
	return (s);
}
