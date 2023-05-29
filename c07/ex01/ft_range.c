/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:58:10 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/29 14:14:04 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	*ft_range(int min, int max);

/* int	main(void)
{
	int		min;
	int		max;
	int		*array = NULL;
	int		size;

	min = 15;
	max = 10;
	size = max - min;
	array = ft_range(min, max);
	for (int i = 0; i < size; i++)
	{
		printf("%i, ", array[i]);
	}
	free(array);
	printf("\n \n");
	min = 15;
	max = 15;
	size = max - min;
	array = ft_range(min, max);
	for (int i = 0; i < size; i++)
	{
		printf("%i, ", array[i]);
	}
	free(array);
	printf("\n \n");
	min = -20;
	max = -10;
	size = max - min;
	array = ft_range(min, max);
	for (int i = 0; i < size; i++)
	{
		printf("%i, ", array[i]);
	}
	free(array);
	printf("\n \n");
	min = 42;
	max = 124;
	size = max - min;
	array = ft_range(min, max);
	for (int i = 0; i < size; i++)
	{
		printf("%i, ", array[i]);
	}
	free(array);
	return (0);
} */

int	*ft_range(int min, int max)
{
	int		*range;
	int		array_size;
	int		i;
	int		j;

	array_size = max - min;
	i = 0;
	j = min;
	if (array_size <= 0)
		return (NULL);
	range = (int *) malloc((array_size) * sizeof(int));
	if (range == NULL)
		return (NULL);
	while (i < array_size)
	{
		range[i] = j;
		i++;
		j++;
	}	
	return (range);
}
