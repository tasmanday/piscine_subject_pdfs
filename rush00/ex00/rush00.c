/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:31:48 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/21 19:52:12 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char c);

void	helpr0(int row, int nrow, int col, int ncol)
{
	if ((row == 0 && col == 0) || (row == 0 && col == ncol - 1))
	{
		ft_putchar('o');
	}
	else if (row == nrow - 1 && col == ncol - 1)
	{
		ft_putchar('o');
	}
	else if (row == nrow - 1 && col == 0)
	{
		ft_putchar('o');
	}
	else if (row == 0 || row == nrow - 1)
	{
		ft_putchar('-');
	}
	else if (col == 0 || col == ncol - 1)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush00(int ncol, int nrow)
{
	int	row;
	int	col;

	row = 0;
	if (ncol < 0 || nrow < 0)
	{
		return ;
	}
	while (row < nrow)
	{
		col = 0;
		while (col < ncol)
		{
			helpr0(row, nrow, col, ncol);
			col ++;
		}
		ft_putchar('\n');
		row ++;
	}
}
