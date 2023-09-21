/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:08:44 by msloot            #+#    #+#             */
/*   Updated: 2023/09/21 13:53:25 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
			write(1, "#", 1);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	ft_putstr_non_printable("popple\n");
	write(1, "\n", 1);
	ft_putstr_non_printable("pizza");
	write(1, "\n", 1);
	ft_putstr_non_printable("\0\t\r\n");
	write(1, "\n", 1);
	ft_putstr_non_printable("");
}
