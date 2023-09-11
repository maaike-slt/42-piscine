/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:59:15 by msloot            #+#    #+#             */
/*   Updated: 2023/09/11 22:39:53 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	half;
	int	i;
	int	k;

	half = size / 2;
	i = 0;
	k = size - 1;
	while (i < half)
	{
		ft_swap(&tab[i], &tab[k]);
		i++;
		k--;
	}
}

/*
int	main(void)
{
	int	tab[] = { 42, 0, -1, 5, 2 };
	int	size;
	int	i;

	size = 5;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
*/
