/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaku <otaku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 01:48:43 by otaku             #+#    #+#             */
/*   Updated: 2022/06/09 01:48:49 by otaku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	print_format(va_list arguments, const char *format, int *size);
static	int	verify_arguments(va_list arguments, const char *format, int size);

int	ft_printf(const char *format, ...)
{
	va_list	arguments;
	int		size;

	va_start(arguments, format);
	size = 0;
	print_format(arguments, format, &size);
	va_end(arguments);
	return (size);
}

static	void	print_format(va_list arguments, const char *format, int *size)
{
	int	i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			*size += verify_arguments(arguments, format, i + 1);
			i++;
		}
		else
			*size += ft_putchar_int(format[i]);
		i++;
	}
}

static int	verify_arguments(va_list arguments, const char *format, int i)
{
	if (format[i] == 'c')
		return (ft_putchar_int(va_arg(arguments, int)));
	else if (format[i] == 's')
		return (ft_putstr_int(va_arg(arguments, char *)));
	else if (format[i] == 'd' || format[i] == 'i')
		return (ft_putnbr_int(va_arg(arguments, int)));
	else if (format[i] == 'u')
		return (ft_print_unsigned_int(va_arg(arguments, unsigned int)));
	else if (format[i] == 'p')
		return (ft_print_pointer(va_arg(arguments, unsigned long)));
	else if (format[i] == 'x')
		return (ft_print_hex_int(va_arg(arguments, unsigned int), 'x'));
	else if (format[i] == 'X')
		return (ft_print_hex_int(va_arg(arguments, unsigned int), 'X'));
	else if (format[i] == '%')
		return (ft_putchar_int('%'));
	return (0);
}
