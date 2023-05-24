/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:21:53 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 18:25:32 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_lowercase(char *str);

/* int	main(void)
{
	char	*str;
	int		n;

	str = "hello";
	n = ft_str_is_lowercase(str);
	printf("%i\n", n);
	return (0);
} */

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
