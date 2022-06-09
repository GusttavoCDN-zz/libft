/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:43:19 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:43:31 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hex_int(unsigned int nb, char type)
{
	char	*number;
	int		number_len;
	int		i;

	i = 0;
	number_len = 0;
	if (!nb)
		return (write(1, "0", sizeof(char)));
	number = (char *) malloc((ft_calc_hex_length(nb) + 1) * sizeof(char));
	while (nb)
	{
		number[i] = ft_decimal_to_hex(nb % 16, type);
		nb = nb / 16;
		i++;
	}
	number[i] = '\0';
	number_len = ft_putstr_reversed(number);
	free(number);
	return (number_len);
}
