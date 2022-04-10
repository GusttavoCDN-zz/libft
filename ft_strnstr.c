/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:05:05 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/10 18:19:37 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_size;

	i = 0;
	l_size = ft_strlen(little);
	if (!l_size)
		return ((char *) big);
	while (big[i] && (i + l_size <= len) && (len != 0))
	{
		if (big[i] == little[0])
		{
			if (!ft_strncmp(&big[i], little, l_size))
				return ((char *)&big[i]);
		}
		i++;
	}
	return ((void *) 0);
}
