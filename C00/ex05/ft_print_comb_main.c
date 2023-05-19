/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:21:03 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/19 19:52:50 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_digits[6];

void	ft_print_comb(void);
void	ft_set_g_digits(int i, int j, int k);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_set_g_digits(int i, int j, int k)
{	
	g_digits[0] = '0' + i;
	g_digits[1] = '0' + j;
	g_digits[2] = '0' + k;
	g_digits[3] = ',';
	g_digits[4] = ' ';
	g_digits[5] = '\0';
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
				write(1, &g_digits, 5);
				if (i == 7 && j == 8 && k == 9)
				{
					write(1, &g_digits, 3);
				}
			}
		}
	}
}
