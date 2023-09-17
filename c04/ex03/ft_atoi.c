/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:33:56 by msloot            #+#    #+#             */
/*   Updated: 2023/09/17 17:14:47 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 0;
	nb = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
		sign = -sign;
	i++;
	while (str[i] != '\0' && ft_isnum(str[i]))
	{
		nb = nb * 10;
		nb = nb(str[i] - '0');
		i++;
	}
	return (sign * nb);
}

int	main(void)
{
	printf("%d\n", ft_atoi(" 	 -+--++------672"));
}
