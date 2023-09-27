/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:55:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 11:17:51 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_c_in_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_valid_base(char *base)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (i + 1 < len && is_c_in_str(base + i + 1, base[i]))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		len;

	if (!is_valid_base(base))
		return ;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	nb = (long)nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	len = ft_strlen(base);
	if (nb / len != 0)
		ft_putnbr_base(nb / len, base);
	ft_putchar(base[nb % len]);
}

/*
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(42, "0023456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "+0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "012345-6789");
	ft_putchar('\n');
	ft_putnbr_base(42, "0");
	ft_putchar('\n');
	ft_putnbr_base(42, "");
	ft_putchar('\n');

	ft_putchar('\n');

	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(0, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_putchar('\n');
	
	ft_putchar('\n');

	ft_putnbr_base(42, "9876543210");
	ft_putchar('\n');
	ft_putnbr_base(0, "9876543210");
	ft_putchar('\n');
	ft_putnbr_base(-42, "9876543210");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "9876543210");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "9876543210");
	ft_putchar('\n');
	
	ft_putchar('\n');

	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(0, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "01");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "01");
	ft_putchar('\n');
	
	ft_putchar('\n');

	ft_putnbr_base(42, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(0, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(-42, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "0123456789abcdef");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "0123456789abcdef");
	ft_putchar('\n');
	
	ft_putchar('\n');

	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(0, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(-42, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(INT_MAX, "poneyvif");
	ft_putchar('\n');
	ft_putnbr_base(INT_MIN, "poneyvif");
	ft_putchar('\n');
}
*/
