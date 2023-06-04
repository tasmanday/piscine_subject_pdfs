/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:45:32 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 17:21:41 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b);

/* int	main(void)
{
	int		*a;
	int		*b;
	int		i;
	int		j;

	i = 2;
	j = 4;
	a = &i;
	b = &j;
	printf("a = %i, b = %i \n", *a, *b);
	ft_swap(a, b);
	printf("a = %i, b = %i \n", *a, *b);
} */

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
