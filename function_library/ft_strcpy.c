/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:57:42 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 15:26:27 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	ft_strcpy(char *dest, char *src);

/* int	main(void)
{
	char	*src;
	char	dest[6];

	src = "hello";
	printf("src: %s, dest: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("src: %s, dest: %s\n", src, dest);
	return (0);
} */

char	ft_strcpy(char *dest, char *src)
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
