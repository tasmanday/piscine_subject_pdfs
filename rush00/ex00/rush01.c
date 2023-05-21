/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:31:48 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/21 20:20:51 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	helpr1(int row, int nrow, int col, int ncol)
{
	if (row == 0 && col == 0)
	{
		ft_putchar('/');
	}
	else if (row == 0 && col == ncol - 1)
	{
		ft_putchar('\\');
	}
	else if (row == nrow - 1 && col == ncol -1)
	{
		ft_putchar('/');
	}
	else if (row == nrow -1 && col == 0)
	{
		ft_putchar('\\');
	}
	else if ((row == 0 || row == nrow - 1) || (col == 0 || col == ncol - 1))
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush01(int ncol, int nrow)
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
			helpr1(row, nrow, col, ncol);
			col ++;
		}
		ft_putchar('\n');
		row ++;
	}
}
