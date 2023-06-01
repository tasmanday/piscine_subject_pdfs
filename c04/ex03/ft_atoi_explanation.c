/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:59:04 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/25 19:18:12 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_atoi(char *str);
int	allowed(char c);

/* int	main(void)
{
	char	*str;
	int		ints;

	str = "    ---+--+1234ab567";
	ints = ft_atoi(str);
	printf("%i\n", ints);
	return (0);
} */

int	ft_atoi(char *str)
{
	int		result;
	int		i;
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	while (allowed(str[i]))
	{
		if (str[i] == ' ' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13))	// Skips blank spaces and +'s
		{
			i++;
		}
		if (str[i] == '-')
		{
			sign = sign * -1;													// flips the sign between pos and neg for each '-'
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
		result = result * 10 + (str[i] - '0');							// if a number is encountered, subtracts ASCII value of '0' to convert the char to an int, if another number is found, the previous result is multiplied by 10 and the new int is added
		i++;
		}
	}
	return (result * sign);
}

int	allowed(char c)												// checks that the current char is an allowed char
{
	if (c == ' ' || c == '+' || c == '-' || \
		(c >= 9 && c <= 13) || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
