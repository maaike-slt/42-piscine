/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:03:44 by msloot            #+#    #+#             */
/*   Updated: 2023/09/25 12:11:40 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

/*
int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	while (argc > 1)
	{
		argc--;
		ft_putstr(argv[argc]);
		write(1, "\n", 1);
	}
}
*/
