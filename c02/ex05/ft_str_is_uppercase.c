/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:11:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/26 11:18:19 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <unistd.h>

int	main(void)
{
	char	c;

	c = ft_str_is_uppercase("PIZZA") + '0';
	write(1, &c, 1);
	c = ft_str_is_uppercase("piz42za") + '0';
	write(1, &c, 1);
	c = ft_str_is_uppercase("PIz42ZA") + '0';
	write(1, &c, 1);
	c = ft_str_is_uppercase("") + '0';
	write(1, &c, 1);
}
*/
