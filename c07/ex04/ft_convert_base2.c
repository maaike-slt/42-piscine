/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:55:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 17:24:53 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nblen_base(int nbr, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_c_in_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_whitespace(char c)
{
	if ((c > 8 && c < 14) || c == ' ')
		return (1);
	return (0);
}

int	is_valid_base(char *base)
{
	int	i;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (i + 1 < len && is_c_in_str(base + i + 1, base[i]))
			return (0);
		if (base[i] == '-' || base[i] == '+' || ft_is_whitespace(base[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_tonbr_base(char *dest, int nbr, char *base)
{
	long	nb;
	int		base_len;
	int		dest_i;
	int		i;

	nb = (long)nbr;
	base_len = ft_strlen(base);
	dest_i = ft_nblen_base(nbr, base) - 1;
	i = 0;
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
		i++;
	}
	while (nb >= base_len)
	{
		dest[dest_i] = base[nb % base_len];
		nb /= base_len;
		dest_i--;
	}
	if (nb < base_len)
		dest[dest_i] = base[nb];
}
