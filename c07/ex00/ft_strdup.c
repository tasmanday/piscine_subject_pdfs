/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:32:12 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/28 22:18:47 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char *allocated;

	src = "Hello, World!";
	printf("original: %s, @ %p\n", src, src);
	allocated = strdup(src);
	printf("copied: %s, @ %p\n", allocated, allocated);
	allocated = ft_strdup(src);
	printf("ft_copied: %s, @ %p\n", allocated, allocated);
	return (0);
}

strdup uses strlen to get amount of memory needed, then malloc to allocate memory, and strcopy to copy str to destination memory
