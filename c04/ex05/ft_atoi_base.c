/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:55:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 11:44:10 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	index_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	ret;
	int	sign;

	if (!is_valid_base(base))
		return (0);
	ret = 0;
	sign = 1;
	i = 0;
	while ((str[i] > 8 && str[i] < 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] != '\0')
	{
		if (index_in_base(base, str[i]) == -1)
			return (0);
		ret *= ft_strlen(base);
		ret += index_in_base(base, str[i]);
		i++;
	}
	return (ret * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("42", "0023456789"));
	printf("%d\n", ft_atoi_base("42", "+0123456789"));
	printf("%d\n", ft_atoi_base("42", "012345-6789"));
	printf("%d\n", ft_atoi_base("42", "0"));
	printf("%d\n\n", ft_atoi_base("42", ""));

	printf("%d\n", ft_atoi_base("42", "0123456789"));
	printf("%d\n", ft_atoi_base("0", "0123456789"));
	printf("%d\n", ft_atoi_base("-42", "0123456789"));
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n\n", ft_atoi_base("-2147483648", "0123456789"));
	

	printf("%d\n", ft_atoi_base("57", "9876543210"));
	printf("%d\n", ft_atoi_base("9", "9876543210"));
	printf("%d\n", ft_atoi_base("-57", "9876543210"));
	printf("%d\n", ft_atoi_base("7852516352", "9876543210"));
	printf("%d\n\n", ft_atoi_base("-7852516351", "9876543210"));

	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("0", "01"));
	printf("%d\n", ft_atoi_base("-101010", "01"));
	printf("%d\n", ft_atoi_base("1111111111111111111111111111111", "01"));
	printf("%d\n\n", ft_atoi_base("-10000000000000000000000000000000", "01"));

	printf("%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("0", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("-2a", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("7fffffff", "0123456789abcdef"));
	printf("%d\n\n", ft_atoi_base("-80000000", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("vn", "poneyvif"));
	printf("%d\n", ft_atoi_base("p", "poneyvif"));
	printf("%d\n", ft_atoi_base("-vn", "poneyvif"));
	printf("%d\n", ft_atoi_base("offffffffff", "poneyvif"));
	printf("%d\n", ft_atoi_base("-npppppppppp", "poneyvif"));
}
*/
