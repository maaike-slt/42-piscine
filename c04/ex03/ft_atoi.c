/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:33:56 by msloot            #+#    #+#             */
/*   Updated: 2023/09/17 19:45:22 by msloot           ###   ########.fr       */
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
	sign = 1;
	nb = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] != '\0' && ft_isnum(str[i]))
	{
		nb = nb * 10;
		nb += str[i] - '0';
		i++;
	}
	return (sign * nb);
}

/*
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi("+42"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("-+-42"));
	printf("%d\n", ft_atoi("+-+42"));
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" 	 -+--++------672"));
	printf("%d\n", ft_atoi("penapplepen"));
	printf("%d\n", ft_atoi("-penapplepen"));
	printf("%d\n", ft_atoi("-"));
	printf("%d\n", ft_atoi(" 42 42"));
	printf("%d\n", ft_atoi("\f42"));
	printf("%d\n", ft_atoi("\n42"));
	printf("%d\n", ft_atoi("\r42"));
	printf("%d\n", ft_atoi("\t42"));
	printf("%d\n", ft_atoi("\v42"));
	printf("%d\n", ft_atoi("a42-42"));
	printf("%d\n", ft_atoi("2147483647") == atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648") == atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483648") == atoi("2147483648"));
	printf("%d\n", ft_atoi("-2147483649") == atoi("-2147483649"));
	printf("%d\n", ft_atoi("4147483648") == atoi("4147483648"));
	printf("%d\n", ft_atoi("-4147483649") == atoi("-4147483649"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483648"));
	printf("%d\n", ft_atoi("-2147483649"));
	printf("%d\n", ft_atoi("4147483648"));
	printf("%d\n", ft_atoi("-4147483649"));
}
*/
