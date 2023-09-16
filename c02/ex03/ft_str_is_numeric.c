/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:28:43 by msloot            #+#    #+#             */
/*   Updated: 2023/09/14 10:30:45 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

	c = ft_str_is_numeric("85670349") + '0';
	write(1, &c, 1);
	c = ft_str_is_numeric("012d345") + '0';
	write(1, &c, 1);
	c = ft_str_is_numeric("") + '0';
	write(1, &c, 1);
}
*/
