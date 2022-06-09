/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:24:28 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:24:38 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_int(int n)
{
	int		number_len;
	char	*number;

	number = ft_itoa(n);
	number_len = ft_putstr_int(number);
	free(number);
	return (number_len);
}
