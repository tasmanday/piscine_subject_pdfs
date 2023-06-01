/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:04:01 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/25 14:28:18 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strstr(char *str, char *to_find);

/* int	main(void)
{
	char	str[14] = "Hello, world!";
	char	to_find[5] = "lo, ";
	char	*found;

	printf("string: %s, to find: %s\n", str, to_find);
	found = ft_strstr(str, to_find);
	printf("found: %s\n", found);
} */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return ((char *)str);					// if *to_find points to an empty array return the source string
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])		// checks for consecutive characters that match between to_find and str
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)(str + i));			// if the consecutive characters match all of the way to the end of the to_find string, returns the source string form the begining of where the chars match
		}
		i++;
	}
	return (0);									// if to_find is not found within str, returns 0
}
