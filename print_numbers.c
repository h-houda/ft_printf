/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:17:55 by hhouda            #+#    #+#             */
/*   Updated: 2022/05/05 18:17:18 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %d & %i */
int	print_decimal(int nb)
{
	long int	nbr;

	nbr = (long int)nb;
	ft_putnbr(nbr);
	return (get_size_decimal(nbr));
}

/* %u */

int	print_unsigned_decimal(unsigned int nb)
{
	long int	nbr;

	nbr = (long int) nb;
	ft_putnbr(nbr);
	return (get_size_decimal(nbr));
}

/* %x */
int	print_hexa_lc(unsigned int nb)
{
	unsigned long long	nbr;

	nbr = (unsigned long)nb;
	if (nbr >= 16)
	{
		print_hexa_lc(nbr / 16);
		print_hexa_lc(nbr % 16);
	}
	else
		ft_putchar(LC_HEXADECIMAL_BASE[nbr]);
	return (get_size_hexa(nbr));
}

/* %X */
int	print_hexa_uc(unsigned int nb)
{
	unsigned long long	nbr;

	nbr = (unsigned long) nb;
	if (nbr >= 16)
	{
		print_hexa_uc(nbr / 16);
		print_hexa_uc(nbr % 16);
	}
	else
		ft_putchar(UC_HEXADECIMAL_BASE[nbr]);
	return (get_size_hexa(nbr));
}
