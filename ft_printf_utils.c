#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(long int nb)
{
	if (nb < 0)
	{

		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int	get_size_decimal(long int nb)
{
	long int	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		size++;
	}
	while (nb)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

int	get_size_hexa(unsigned long long nb)
{
	unsigned long long size;

	size = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 16;
		size++;
	}
	return (size);
}


