/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_reversed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:27:23 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:49:44 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_reversed(char *str)
{
	int	i;
	int	bytes;

	bytes = ft_strlen(str);
	i = bytes - 1;
	while (i >= 0)
	{
		write(1, &str[i], sizeof(char) * 1);
		i--;
	}
	return (bytes);
}
