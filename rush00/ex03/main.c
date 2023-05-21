/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:25:48 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/21 19:34:11 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush03(int col, int row);
int		char_to_int(char *str);
void	rush0_(char *rush0, int ix, int iy);

int	main(int argc, char *argv[])
{
	int		ix;
	int		iy;

	if (argc != 4)
	{
		return (1);
	}
	ix = char_to_int(argv[2]);
	iy = char_to_int(argv[3]);
	if ((ix < 0) && (iy < 0))
	{
		return (2);
	}
	rush0_(argv[1], ix, iy);
	write(1, "\n", 1);
	return (0);
}

int	char_to_int(char *str)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	rush0_(char *rush0, int ix, int iy)
{
/*	if (rush0[5] == '0')
	{
		rush00(ix, iy);
	}
	if (rush0[5] == '1')
	{
		rush01(ix, iy);
	}
	if (rush0[5] == '2')
	{
		rush02(ix, iy);
	} */
	if (rush0[5] == '3')
	{
		rush03(ix, iy);
	}
/*	if (rush0[5] == '4')
	{
		rush04(ix, iy);
	} */
}
