/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:50:23 by msloot            #+#    #+#             */
/*   Updated: 2023/09/11 16:03:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	ft_div_mod(*a, *b, &div, &mod);
	*a = div;
	*b = mod;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 9;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}
*/
