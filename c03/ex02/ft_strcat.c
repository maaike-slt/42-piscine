/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:03:11 by msloot            #+#    #+#             */
/*   Updated: 2023/09/14 14:22:57 by msloot           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	src_i;
	unsigned int	dest_i;

	dest_i = ft_strlen(dest);
	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[42] = "pen";
	char	dest[42] = "apple";

	printf("%s %s \n", src, dest);
	ft_strcat(dest, src);
	printf("%s %s", src, dest);
}
*/
