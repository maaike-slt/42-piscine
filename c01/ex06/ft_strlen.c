/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:24:17 by msloot            #+#    #+#             */
/*   Updated: 2023/09/11 18:02:53 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	size_t	i;

	ft_strlen("pizza");
	write(1, &i, 1);
	write(1, ", ", 2);
	ft_strlen("gnome");
	write(1, &i, 1);
	write(1, ", ", 2);
	ft_strlen("");
	write(1, &i, 1);
	write(1, ", ", 2);
	ft_strlen("WillThisBeTooLong?");
	write(1, &i, 1);
}
