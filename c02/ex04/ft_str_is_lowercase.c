/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:52:20 by msloot            #+#    #+#             */
/*   Updated: 2023/09/13 13:01:15 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <unistd.h>

int	main(void)
{
	char	c;

	c = ft_str_is_lowercase("pizza") + '0';
	write(1, &c, 1);
	c = ft_str_is_lowercase("piz42za") + '0';
	write(1, &c, 1);
	c = ft_str_is_lowercase("") + '0';
	write(1, &c, 1);
}
