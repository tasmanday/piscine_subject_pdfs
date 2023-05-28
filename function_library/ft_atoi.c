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
		if (str[i] == ' ' || str[i] == '+' || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		if (str[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
		result = result * 10 + (str[i] - '0');
		i++;
		}
	}
	return (result * sign);
}

int	allowed(char c)
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
