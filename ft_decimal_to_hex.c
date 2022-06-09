/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:42:29 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:42:53 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_decimal_to_hex(char digit, char type)
{
	int	capitalize;

	capitalize = 0;
	if (type == 'X')
		capitalize = 32;
	if (digit > 9)
	{
		if (digit == 10)
			return ('a' - capitalize);
		else if (digit == 11)
			return ('b' - capitalize);
		else if (digit == 12)
			return ('c' - capitalize);
		else if (digit == 13)
			return ('d' - capitalize);
		else if (digit == 14)
			return ('e' - capitalize);
		else if (digit == 15)
			return ('f' - capitalize);
	}
	else
		return (digit + '0');
	return (0);
}
