/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 22:01:10 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/18 22:09:36 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[5];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				digits[0] = '0' + i;
				digits[1] = '0' + j;
				digits[2] = '0' + k;
				digits[3] = ',';
				digits[4] = ' ';
				if (i == 7 && j == 8 && k == 9)
				{
					write(1, &digits, 3);
				}
				else
				{
					write(1, &digits, 5);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
