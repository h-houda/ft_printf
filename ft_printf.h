/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhouda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:17:33 by hhouda            #+#    #+#             */
/*   Updated: 2022/05/05 18:25:32 by hhouda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# define UC_HEXADECIMAL_BASE "0123456789ABCDEF"
# define LC_HEXADECIMAL_BASE "0123456789abcdef"

int		ft_printf(const char *format, ...);

/* Utils */
int		ft_putchar(char c);
void	ft_putnbr(long int nb);
int		get_size_decimal(long int nb);
int		get_size_hexa(unsigned long long nb);

/* Conversions */
int		print_char(char c);
int		print_str(char *str);
int		print_address(void *ptr);
int		print_decimal(int nb);
int		print_unsigned_decimal(unsigned int nb);
int		print_hexa_lc(unsigned int nb);
int		print_hexa_uc(unsigned int nb);
#endif
