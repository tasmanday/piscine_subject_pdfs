/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 12:15:39 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/27 15:38:36 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char	*str);
int		ft_error(char *str);
int		ft_duplicate(char *str);
void	ft_putnbr_base(int nbr, char *base);

/* int	main(void)
{
	char	nl;

	nl = '\n';
	ft_putnbr_base(-42, "01");
	ft_putchar(nl);
	ft_putnbr_base(42, "poneyvif");
	ft_putchar(nl);
	ft_putnbr_base(42000, "0123456789");
	ft_putchar(nl);
	ft_putnbr_base(-42, "0123456789abcdef");
	ft_putchar(nl);
} */

void	ft_putchar(char c)			// prints to terminal
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)			// counts string length
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_error(char *str)						// checks for invalid characters and string lengths, returns 0 if found
{
	int		i;
	int		len;

	len = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || len == 1)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_duplicate(char *str)					// checks for duplicates in the bases, seperated from ft_error due to function length constraints
{
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		error;
	int		duplicate;
	long	n;

	error = ft_error(base);
	duplicate = ft_duplicate(base);
	len = ft_strlen(base);
	n = nbr;
	if (error == 1 && duplicate == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');			// if given a negative number, prints '-' and multiplies by '-1' to get a positive number
			n *= -1;
		}
		if (n < len)
			ft_putchar(base[n]);		// if the number is smaller than the base prints the number/letter in that position of the base
		if (n >= len)
		{
			ft_putnbr_base(n / len, base);	// if the number is larger than the base, n is divided by the length of the base and then fed back into the ft_putnbr_base function
			ft_putnbr_base(n % len, base);	// if the number is larger than the base, n is divided by the length of the base and the remainder is then fed back into the ft_putnbr_base function
		}
	}
}
