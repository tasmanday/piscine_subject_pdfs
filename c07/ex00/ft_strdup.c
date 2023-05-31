/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:32:12 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/31 21:08:18 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	*allocated;
	char	*str_dup;

	src = "Hello, World!";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "@@ -1,4 +1,4 @@";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "-(null)";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "+";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "hello 42";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "nOpFnXJ3Cd3eOeb";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "EyOsJhn1KECYm";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	src = "\0";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_strdup: %s, @ %p\n", allocated, allocated);
	str_dup = strdup(src);
	printf("strdup: %s, @ %p\n\n", str_dup, str_dup);
	return (0);
}

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
	int		len;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_strcpy(dest, src);
	return (dest);
}
