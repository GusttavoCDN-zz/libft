/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:45:01 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:45:29 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int n)
{
	int		number_len;
	char	*number;

	number_len = 0;
	if (n == 0)
		number_len += write(1, "0", 1);
	else
	{
		number = ft_utoa(n);
		number_len += ft_putstr_int(number);
		free(number);
	}
	return (number_len);
}
