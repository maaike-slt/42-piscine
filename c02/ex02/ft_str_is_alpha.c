/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:38:03 by msloot            #+#    #+#             */
/*   Updated: 2023/09/14 10:29:11 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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

	c = ft_str_is_alpha("pizza") + '0';
	write(1, &c, 1);
	c = ft_str_is_alpha("piz42za") + '0';
	write(1, &c, 1);
	c = ft_str_is_alpha("") + '0';
	write(1, &c, 1);
}
*/
