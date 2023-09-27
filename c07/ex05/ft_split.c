/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:17:34 by msloot            #+#    #+#             */
/*   Updated: 2023/09/27 13:41:37 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_until_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !ft_is_in(str[i], charset))
		i++;
	return (i);
}

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	process(char **split, char *str, char *charset)
{
	int	split_i;
	int	i;

	split_i = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_in(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			if (split)
				split[split_i] = \
					ft_strndup(&str[i], ft_strlen_until_sep(&str[i], charset));
			split_i++;
		}
		while (str[i] != '\0' && !ft_is_in(str[i], charset))
			i++;
	}
	return (split_i);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		word_count;

	word_count = process(NULL, str, charset);
	ret = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!ret)
		return (NULL);
	process(ret, str, charset);
	ret[word_count] = NULL;
	return (ret);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc < 3)
		return (0);
	split = ft_split(argv[1], argv[2]);
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
*/
