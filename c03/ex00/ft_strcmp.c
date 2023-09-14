/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:40:29 by msloot            #+#    #+#             */
/*   Updated: 2023/09/13 22:46:48 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("pizza", "pizza"));
	printf("%d\n", ft_strcmp("pizza", "pozza"));
	printf("%d\n", ft_strcmp("pizza", "pizzapoo"));
	printf("%d\n", ft_strcmp("azzipizza", "pizza"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("A", ""));
	printf("%d\n", ft_strcmp("", "A"));
}
*/
