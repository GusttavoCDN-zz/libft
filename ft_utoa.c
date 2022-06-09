/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:31:23 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:49:36 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_find_size(unsigned int n)
{
	size_t	i;

	i = 1;
	if (n <= 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	char		*str;
	size_t		size;
	size_t		i;

	size = ft_find_size(n);
	str = (char *) calloc(size, sizeof(char));
	if (n == 0)
		str[0] = '0';
	if (!str)
		return (NULL);
	i = size - 1;
	while (n > 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	str[size - 1] = '\0';
	return (str);
}
