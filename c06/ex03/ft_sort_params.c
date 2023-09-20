/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:00:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/20 17:18:14 by msloot           ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

int	ft_swap_params(char **swp)
{
	int	i;
	int	p;
	char	*temp;

	i = 1;
	p = 1;
	if (swp[p] && ft_strcmp(swp[i], swp[p]) <= 0)
		p++;
	while (swp[i])
	{
		if (swp[p] > swp[i])
		{
			temp = swp[i];
			swp[i] = swp[p];
			swp[p] = temp;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc <= 1)
		return (0);
	while (argc > 1)

}
