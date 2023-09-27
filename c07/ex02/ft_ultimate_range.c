/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:54:49 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 08:53:26 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*range;
	int	size;
	int	min;
	int	max;
	int	i;

	if (argc < 3)
		return (0);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	size = ft_ultimate_range(&range, min, max);
	printf("%d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
*/
