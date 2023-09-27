/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:48:51 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 12:29:42 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_base(char *base);
int	ft_strlen(char *str);
int	ft_tonbr_base(char *dest, int nbr, char *base);

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

int	ft_nblen_base(int nbr, char *base)
{
	long	nb;
	long	base_len;
	int		i;

	i = 0;
	nb = (long)nbr;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	base_len = ft_strlen(base);
	while (nb >= base_len)
	{
		nb /= base_len;
		i++;
	}
	i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ret;
	int		b10_nbr;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	b10_nbr = ft_atoi_base(nbr, base_from);
	ret = (char *)malloc(sizeof(char) * (ft_nblen_base(b10_nbr, base_to) + 1));
	if (!ret)
		return (NULL);
	ft_tonbr_base(ret, b10_nbr, base_to);
	return (ret);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*ret;

	if (argc < 4)
		return (0);
	ret = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s\n", ret);
	free(ret);
}
*/
