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
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}
