/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:57:42 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/23 21:36:07 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[6];

	src = "hello";
	printf("src: %s, dest: %s\n", src, dest);
	strcpy(dest, src);
	printf("src: %s, dest: %s\n", src, dest);
	return (0);
}

char	ft_strcpy(char *dest, char *src)
{
	char	*temp_dest;
	int		i;

	i = 0;
	temp_dest = &dest;
	while (src[i] != '\0')
	{
		*temp_dest[i] = src[i];
		i++;
	}
	*temp_dest[i] = '\0';
	return dest;
}
