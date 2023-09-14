/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:20:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/14 15:36:54 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[42];
	char	src[42];

	src[0] = '\0';
	dest[0] = '\0';

	printf("'%s' '%s'\n", src, dest);

	ft_strcpy(src, "pizza");
	ft_strcpy(dest, src);

	printf("'%s' '%s'\n", src, dest);
}
*/
