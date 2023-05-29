/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:32:12 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/29 14:14:55 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

/* int	main(void)
{
	char	*src;
	char	*allocated;

	src = "Hello, World!";
	printf("original: %s, @ %p\n", src, src);
	allocated = ft_strdup(src);
	printf("ft_copied: %s, @ %p\n", allocated, allocated);
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

	if (src[0] == '\0')
		return (0);
	else
	{
		len = ft_strlen(src);
		dest = (char *) malloc((len + 1) * sizeof(char));
		if (dest == NULL)
			return (NULL);
		dest = ft_strcpy(dest, src);
		return (dest);
	}
}
