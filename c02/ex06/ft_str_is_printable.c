/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:42:15 by msloot            #+#    #+#             */
/*   Updated: 2023/09/26 11:44:27 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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

	c = ft_str_is_printable("pizza") + '0';
	write(1, &c, 1);
	c = ft_str_is_printable("piz42\nza") + '0';
	write(1, &c, 1);
	c = ft_str_is_printable("") + '0';
	write(1, &c, 1);
}
*/
