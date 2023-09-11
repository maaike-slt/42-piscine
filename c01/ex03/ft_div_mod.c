/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:33:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/11 12:27:03 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 9;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d", a, b, div, mod);
}
*/
