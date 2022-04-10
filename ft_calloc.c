/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:45:03 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/10 15:01:29 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb >= 18446744073709551615UL || size >= 18446744073709551615UL
		|| nmemb * size >= 18446744073709551615UL)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
