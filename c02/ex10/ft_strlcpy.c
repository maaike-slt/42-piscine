/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:50:40 by msloot            #+#    #+#             */
/*   Updated: 2023/09/21 12:05:01 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	src[42] = "pizza";
	char	dest[42] = "coconut";

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));

	printf("%u\n", ft_strlcpy(dest, src, 21));

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));

	printf("%u\n", ft_strlcpy(src, "no", 21));
	printf("%u\n", ft_strlcpy(dest, src, 16));

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));
}
