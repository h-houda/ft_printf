/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:18:32 by hhouda            #+#    #+#             */
/*   Updated: 2022/05/05 20:02:16 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_format(const char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (print_address(va_arg (args, void *)));
	else if (c == 'd' || c == 'i')
		return (print_decimal(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsigned_decimal(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_hexa_lc(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (print_hexa_uc(va_arg(args, unsigned int)));
	else
		return (print_char('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		res;

	va_start(args, format);
	i = 0;
	res = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			res = res + convert_format(format[i], args);
		}
		else
		{
			ft_putchar(format[i]);
			res++;
		}
		i++;
	}
	va_end(args);
	return (res);
}
