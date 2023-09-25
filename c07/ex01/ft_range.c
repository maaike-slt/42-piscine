/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:54:49 by msloot            #+#    #+#             */
/*   Updated: 2023/09/25 22:16:42 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	*ft_range(int min, int max)
{
	int	*ret;
	int	i;

	if (min >= max)
		return (NULL);
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*range;
	int	min;
	int	max;
	int	i;

	if (argc < 3)
		return (0);
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
*/
