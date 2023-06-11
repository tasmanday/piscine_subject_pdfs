/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 23:38:57 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/11 00:13:31 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));
/* int		ft_triple(int n);

int	main(void)
{
	int		tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		*arr;
	int		i;

	i = 0;
	arr = ft_map(tab, 10, &ft_triple);
	while (i < 10)
	{
		printf("arr[%i] = %i\n", i, arr[i]);
		i++;
	}
	return (0);
}

int	ft_triple(int n)
{
	n *= 3;
	return (n);
} */

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int		i;
	int		*arr;

	arr = (int *) malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
