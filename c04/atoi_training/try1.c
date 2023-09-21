/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:06:39 by msloot            #+#    #+#             */
/*   Updated: 2023/09/21 11:29:10 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnum(int nb)
{
	if (nb >= '0' && nb <= '9')
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
	while (str[i] > 8 && str[i] < 14 || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
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
