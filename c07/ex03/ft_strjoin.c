/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 08:58:49 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 09:26:41 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

int	ft_strjoin_len(int size, char **strs, char *sep)
{
	int	i;
	int	ret;
	int	sep_len;

	if (size == 0)
		return (1);
	ret = 0;
	i = 0;
	while (i < size)
	{
		ret += ft_strlen(strs[i]);
		i++;
	}
	sep_len = ft_strlen(sep);
	ret += sep_len * (size - 1);
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		len;
	int		i;

	len = ft_strjoin_len(size, strs, sep);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if (i != size - 1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}

/*
#include <stdio.h>

// argv[0] == "./a.out"
// argv[1] == sep
// argv + 2 == strs
// for ./a.out "some_sep" "some str" "some other str"
// argc == 4
// size of argv + 2 == 2 (argc - 2)

int	main(int argc, char *argv[])
{
	char	*ret;

	if (argc < 2)
		return (0);
	ret = ft_strjoin(argc - 2, argv + 2, argv[1]);
	printf("%s\n", ret);
	free(ret);
}
*/
