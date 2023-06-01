/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:02:46 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 18:20:48 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_numeric(char *str);

/* int	main(void)
{
	char	*str;
	int		n;

	str = "123";
	n = ft_str_is_numeric(str);
	printf("%i\n", n);
	return (0);
} */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);                 // returns 1 (true) if the string is empty
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);         // returns 0 (false) if the string contains any characters that arent digits
		}
		i++;
	}
	return (1);                 // returns 1 (true) if the function iterates through the entire string without finding a character that isnt a digit 
}
