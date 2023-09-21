/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:38:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/21 14:48:11 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;

	pow = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		pow *= nb;
		power--;
	}
	return (pow);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 3));
	printf("%d\n", ft_iterative_power(-5, 3));
	printf("%d\n", ft_iterative_power(-5, 2));
	printf("%d\n", ft_iterative_power(5, -3));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(0, 1));
	printf("%d\n", ft_iterative_power(0, 5));
	printf("%d\n", ft_iterative_power(1, 5));
	printf("%d\n", ft_iterative_power(5, 1));
	printf("%d\n", ft_iterative_power(42, 21));
}
*/
