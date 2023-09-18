/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:58:24 by msloot            #+#    #+#             */
/*   Updated: 2023/09/18 10:48:17 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_i;
	unsigned int	dest_i;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	dest_i = dest_len;
	src_i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (dest_len + src_i < size - 1 && src[src_i] != '\0')
		{
			dest[dest_i] = src[src_i];
			dest_i++;
			src_i++;
		}
		dest[dest_i] = '\0';
	}
	if (dest_len > size)
		dest_len = size;
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[42] = "pizza";
	char	dest[42] = "coconut";

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));

	printf("%u\n", ft_strlcat(dest, src, 21));

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));

	printf("%u\n", ft_strlcat(src, "no", 21));
	printf("%u\n", ft_strlcat(dest, src, 16));

	printf("%s: %u\n", src, ft_strlen(src));
	printf("%s: %u\n", dest, ft_strlen(dest));
}
*/
