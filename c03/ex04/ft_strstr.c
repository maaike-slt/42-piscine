/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:17:34 by msloot            #+#    #+#             */
/*   Updated: 2023/09/18 13:28:43 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (&str[0]);
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, to_find_len) == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strstr("penapple", "app"));
	printf("%s\n", ft_strstr("penaple", "app"));
	printf("%s\n", ft_strstr("", "app"));
	printf("%s\n", ft_strstr("penapple", ""));
	printf("%s\n", ft_strstr("", ""));
}
*/
