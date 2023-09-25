/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:54:49 by msloot            #+#    #+#             */
/*   Updated: 2023/09/25 22:02:15 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!ret)
		return (NULL);
	ft_strcpy(ret, src);
	return (ret);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*dest;

	if (argc < 2)
		return (0);
	dest = ft_strdup(argv[1]);
	printf("%p:\t%s\n", argv[1], argv[1]);
	printf("%p:\t%s\n", dest, dest);
	free(dest);
}
*/
