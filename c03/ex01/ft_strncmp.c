/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:40:29 by msloot            #+#    #+#             */
/*   Updated: 2023/09/13 23:02:50 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strncmp("pizza", "pizza", 5));
	printf("%d\n", ft_strncmp("pizza", "pozza", 5));
	printf("%d\n", ft_strncmp("pizza", "pizzapoo", 42));
	printf("%d\n", ft_strncmp("azzipizza", "pizza", 42));
	printf("%d\n", ft_strncmp("", "", 0));
	printf("%d\n", ft_strncmp("", "", 1));
	printf("%d\n", ft_strncmp("A", "", 1));
	printf("%d\n", ft_strncmp("", "A", 1));
	printf("%d\n", ft_strncmp("pizza", "pizza", 3));
	printf("%d\n", ft_strncmp("pizza", "pizzo", 4));
}
*/
