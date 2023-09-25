/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:03 by msloot            #+#    #+#             */
/*   Updated: 2023/09/25 12:11:03 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc <= 1)
		return (0);
	if (argc > 1)
	{
		while (argv[i])
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
}
*/
