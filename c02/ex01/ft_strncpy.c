/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msloot <msloot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:20:10 by msloot            #+#    #+#             */
/*   Updated: 2023/09/12 22:36:17 by msloot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest[42];
	char	src[42];

	src[0] = '\0';
	dest[0] = '\0';

	printf("'%s' '%s'\n", src, dest);

	ft_strncpy(src, "pizza", 21);
	ft_strncpy(dest, src, 3);

	printf("'%s' '%s'\n", src, dest);

	ft_strncpy(dest, src, 10);

	printf("'%s' '%s'\n", src, dest);
}
*/
