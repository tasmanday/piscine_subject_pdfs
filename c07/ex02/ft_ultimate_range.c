/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:23:37 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/30 19:43:28 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	ft_ultimate_range(int **range, int min, int max);

/* int	main(void)
{
	int		min;
	int		max;
	int		*array = NULL;
	int		size;

	min = 15;
	max = 10;
	size = ft_ultimate_range(&array, min, max);
	printf("%i\n\n", size);
	min = 15;
	max = 15;
	size = ft_ultimate_range(&array, min, max);
	printf("%i\n\n", size);
	min = -20;
	max = -10;
	size = ft_ultimate_range(&array, min, max);
	printf("%i\n\n", size);
	min = 42;
	max = 124;
	size = ft_ultimate_range(&array, min, max);
	printf("%i\n", size);
	return (0);
} */

int	ft_ultimate_range(int **range, int min, int max)
{
	int		array_size;
	int		i;
	int		j;

	array_size = max - min;
	i = 0;
	j = min;
	if (array_size <= 0)
		return (-1);
	*range = (int *) malloc((array_size) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < array_size)
	{
		(*range)[i] = j;
		i++;
		j++;
	}	
	return (array_size);
}
