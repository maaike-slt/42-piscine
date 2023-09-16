/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:49:20 by msloot            #+#    #+#             */
/*   Updated: 2023/09/14 17:12:31 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_i;
	unsigned int	dest_i;

	dest_i = ft_strlen(dest);
	src_i = 0;
	while (src[src_i] != '\0' && src_i < nb)
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}


#include <stdio.h>

int	main(void)
{
	char	src[42] = "pensylvannia";
	char	dest[42] = "apple";
	unsigned int	nb = 7;

	printf("%s %s \n", src, dest);
	ft_strncat(dest, src, nb);
	printf("%s %s", src, dest);
}

