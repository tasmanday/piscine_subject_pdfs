/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:21:03 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/18 23:30:24 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	digits[6];

void	ft_print_comb(void);
void	ft_set_digits(int i, int j, int k);

int	main(void)
{
	ft_print_comb();
	return 0;
}

void	ft_set_digits(int i, int j, int k)
{	
	digits[0] = '0' + i;
	digits[1] = '0' + j;
	digits[2] = '0' + k;
	digits[3] = ',';
	digits[4] = ' ';
	digits[5] = '\0';
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i++ <= 7)
	{
		j = i + 1;
		while (j++ <= 8)
		{
			k = j + 1;
			while (k++ <= 9)
			{
				ft_set_digits(i - 1, j - 1, k - 1);
				write(1, &digits, 5);
				if (i == 7 && j == 8 && k == 9)
				{
					write(1, &digits, 3);
				}
			}
		}
	}
}
