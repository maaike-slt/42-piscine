/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:38:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/21 14:47:45 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>   

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(-5, 3));
	printf("%d\n", ft_recursive_power(-5, 2));
	printf("%d\n", ft_recursive_power(5, -3));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(1, 0));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(0, 1));
	printf("%d\n", ft_recursive_power(0, 5));
	printf("%d\n", ft_recursive_power(1, 5));
	printf("%d\n", ft_recursive_power(5, 1));
	printf("%d\n", ft_recursive_power(42, 21));
}
*/
