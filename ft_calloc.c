/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:45:03 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/06 19:23:29 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	s_bzero(void *s, size_t n)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = 0;
	while (len < n)
		str[len++] = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	s_bzero(pointer, nmemb * size);
	return (pointer);
}
