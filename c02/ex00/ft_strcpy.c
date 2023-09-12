/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:20:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/12 18:59:19 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	k;

	k = '0';
	while (src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return(dest);
}

int	main(void)
{
	char	dest[5];
	char	src[5];

	src[0] = '\0';
	dest[0] = '\0';

	printf("%s %s\n", src, dest);

	ft_strcpy(src, "pizza");
	ft_strcpy(dest, src);

	printf("%s %s\n", src, dest);
}
