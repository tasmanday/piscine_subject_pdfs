/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 20:17:32 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/19 21:13:18 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_digits[8];

void	ft_set_g_digits(int i, int j);
void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	return (0);
}

void	ft_set_g_digits(int i, int j)
{
	g_digits[0] = '0' + (i / 10);
	g_digits[1] = '0' + (i % 10);
	g_digits[2] = ' ';
	g_digits[3] = '0' + (j / 10);
	g_digits[4] = '0' + (j % 10);
	g_digits[5] = ',';
	g_digits[6] = ' ';
	g_digits[7] = '\0';
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = -1;
	while (i++ < 98)
	{
		j = i;
		while (j++ < 99)
		{			
			ft_set_g_digits(i, j);
			write(1, &g_digits, 7);
			if (i == 98 && j == 99)
			{
				write(1, &g_digits, 5);
			}
		}
	}
}
