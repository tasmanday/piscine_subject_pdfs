/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:12:08 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/07 08:41:58 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

/* int	main(void)
{
	char	*src;
	char 	dest[11];

	src = "test string";
	printf("src: %s, dest: %s\n", src, dest);
	ft_strcpy(src, dest);
	printf("src: %s, dest: %s\n", src, dest);
	return (0);
} */

char    *ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s2[i] = '\0';
	return (s1);
}
