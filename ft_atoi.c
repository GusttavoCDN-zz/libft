/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guda-sil@student.42sp.org.br <guda-sil@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 21:06:28 by guda-sil@st       #+#    #+#             */
/*   Updated: 2022/04/10 18:10:52 by guda-sil@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	s_isspace(int c);

int	ft_atoi(const char *s)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (s_isspace(*s))
		s++;
	if (*s == '-')
	{
		sign = -sign;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		result = 10 * result + (*s - 48);
		s++;
	}
	return (result * sign);
}

static	int	s_isspace(int c)
{
	return ((c == ' ') || (c == '\n')
		|| (c == '\t') || (c == '\v')
		|| (c == '\f') || (c == '\r'));
}
