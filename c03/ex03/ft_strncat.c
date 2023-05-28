/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:53:47 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/25 11:55:40 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int n);

/* int	main(void)
{
	char	dest[15] = "Hello, ";
	char	src[] = "world!";
	unsigned int	n;

	n = 2;
	printf("original dest: %s, original src: %s\n", dest, src);
	ft_strncat(dest, src, n);
	printf("dest: %s, src: %s\n", dest, src);
} */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
