#include "ft_printf.h"

/* %c */
int	print_char(char c)
{
	ft_putchar(c);
	return (1);
}

/* %s */
int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		i = i + ft_putchar(str[i]);
	return(i);
}


/* %p */
static void	convert_print_hexa(unsigned long long nb)
{
	if (nb >= 16)
	{
		convert_print_hexa(nb / 16);
		convert_print_hexa(nb % 16);
	}
	else
		ft_putchar(LC_HEXADECIMAL_BASE[nb]);
}

int	print_address(void *ptr)
{
	int	i;
	unsigned long long	address;

	address = (unsigned long long)ptr;
	i = print_str("0x");
	convert_print_hexa(address);
	return(get_size_hexa(address) + i);
}

