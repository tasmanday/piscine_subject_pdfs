/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:20:26 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/07 19:50:56 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	char_check(char *charset, char *str);

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	char_check(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

void	char_check(char *charset, char *str)
{
	int		i;
	int		j;
	int		k;
	int		printed;

	i = 0;
	while (charset[i] != '\0')
	{
		j = 0;
		printed = 0;
		while (j < i)
		{
			if (charset[j] == charset[i])
			{
				printed = 1;
			}
			j++;
		}
		k = 0;
		while (str[k] != '\0' && !printed)
		{
			if (charset[i] == str[k])
			{
				ft_putchar(charset[i]);
				printed = 1;
			}
			k++;
		}
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
