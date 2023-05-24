/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:29:12 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 22:26:51 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size);

/* int	main(void)
{
	int		tab[5];
	int		size;
	
	tab[0] = 1;
   	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	size = 5;
	ft_rev_int_tab(tab, size);
	for (int j = 0; j < size; j++)
	{
		printf("%i ,", tab[j]);
	}
	return (0);
} */

void	ft_rev_int_tab(int *tab, int size)
{
	int		k;
	int		l;
	int		bat[size];

	l = 0;
	k = 0;
	while (k < size)
	{
		bat[k] = tab[k];
		k++;
	}
	k--;
	while (k >= 0)
	{
		tab[l] = bat[k];
		l++;
		k--;
	}
}
