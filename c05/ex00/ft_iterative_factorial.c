/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:01:49 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/31 14:06:49 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

/* int	main(void)
{
	int		nb;
	int		f;

	nb = -5;
	f = ft_iterative_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 0;
	f = ft_iterative_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 1;
	f = ft_iterative_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 5;
	f = ft_iterative_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	return (0);
} */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		f;

	i = 2;
	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	return (f);
}
