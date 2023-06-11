/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:14:02 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/11 14:24:54 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int));
/* int		ft_dif(int a, int b);

int	main(void)
{
	int		sort0[10] = {0, 5, 3, 8, 2, 1, 4, 9, 7, 6};
	int		sort1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		length;
	int		r0;
	int		r1;

 	length = 10;
	r0 = ft_is_sort(sort0, length, ft_dif);
	printf("1 = sorted, 0 = not sorted, sort0 = %i\n", r0);
	r1 = ft_is_sort(sort1, length, ft_dif);
	printf("1 = sorted, 0 = not sorted, sort1 = %i\n", r1);
	return (0);
}

int	ft_dif(int a, int b)
{
	return (a - b);
} */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int		i;
	int		sorted;
	int		result;

	i = 0;
	sorted = 1;
	while (i < length - 1 && sorted)
	{
		result = f(tab[i], tab[i + 1]);
		if (result > 0)
			sorted = 0;
		i++;
	}
	return (sorted);
}
