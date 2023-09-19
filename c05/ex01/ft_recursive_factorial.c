/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:38:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/19 19:14:38 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (i <= nb && i  > 0)
	{
		fact *= i;
		i++;
		ft_recursive_factorial(nb -= 1);
	}
	return (fact);
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(42));
}
