/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:53:47 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/25 11:40:45 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src);

/* int	main(void)
{
	char	dest[15] = "Hello, ";
	char	src[] = "world!";

	printf("original dest: %s, original src: %s\n", dest, src);
	ft_strcat(dest, src);
	printf("dest: %s, src: %s\n", dest, src);
} */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
