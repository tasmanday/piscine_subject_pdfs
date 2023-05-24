/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:28:52 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 16:17:54 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

/* int	main(void)
{
	char	*src;
	char	dest[14];

	src = "hello, world!";
	printf("src: %s, dest: %s\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf("src: %s, dest: %s\n", src, dest);
	return (0);
} */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

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
