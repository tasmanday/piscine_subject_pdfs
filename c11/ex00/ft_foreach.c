/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:14:32 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/10 23:38:22 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));
/* void	ft_putchar(int n);

int	main(void)
{
	int		tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(tab, 10, &ft_putchar);
	return (0);
}

void	ft_putchar(int n)
{
	n += 48;
	write(1, &n, 1);
	write(1, "\n", 1);
} */

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
