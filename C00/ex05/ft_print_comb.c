/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:01:10 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/19 21:23:49 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_digits[6];

void	ft_print_comb(void);
void	ft_set_g_digits(int i, int j, int k);
void	ft_put_comb(void);

void	ft_set_g_digits(int i, int j, int k)
{
	g_digits[0] = '0' + i;
	g_digits[1] = '0' + j;
	g_digits[2] = '0' + k;
	g_digits[3] = ',';
	g_digits[4] = ' ';
	g_digits[5] = '\0';
}

void	ft_put_comb(void)
{
	if (g_digits[0] == '7' && g_digits[1] == '8' && g_digits[2] == '9')
	{
		write(1, &g_digits, 3);
	}
	else
	{
		write(1, &g_digits, 5);
	}
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (i++ < 7)
	{
		j = i;
		while (j++ < 8)
		{
			k = j;
			while (k++ < 9)
			{
				ft_set_g_digits(i, j, k);
				ft_put_comb();
			}
		}
	}
}
