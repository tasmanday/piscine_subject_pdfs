/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:21:13 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 18:23:08 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

/* int	main(void)
{
	char	*src;
	char	*dup;

	src = "test string";
	printf("src: %s, @ %p\n", src, src);
	dup = ft_strdup(src);
	printf("dup: %s, @ %p\n", dup, dup);
	return (0);
} */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int		n;
	char	*dest;

	n = ft_strlen(src);
	dest = (char *) malloc((n + 1) * sizeof(char *));
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}
