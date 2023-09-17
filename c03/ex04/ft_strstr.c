/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:17:34 by msloot            #+#    #+#             */
/*   Updated: 2023/09/17 13:46:50 by msloot           ###   ########.fr       */
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
	unsigned int i;
	int	to_find_len;

	i = 0;
	to_find_len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, to_find_len) == 0)
			return (&str[i]);
	}
	return("NULL");
}
