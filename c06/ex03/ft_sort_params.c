/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:00:36 by msloot            #+#    #+#             */
/*   Updated: 2023/09/25 12:11:59 by msloot           ###   ########.fr       */
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

void	ft_sort_params(char **argv)
{
	int		small;
	int		i;
	char	*tmp;

	small = 1;
	while (argv[small])
	{
		i = small + 1;
		while (argv[i])
		{
			if (ft_strcmp(argv[small], argv[i]) >= 0)
			{
				tmp = argv[small];
				argv[small] = argv[i];
				argv[i] = tmp;
			}
			i++;
		}
		small++;
	}
}

/*
int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_params(argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
*/
