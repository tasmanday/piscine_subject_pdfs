/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:07:40 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/28 19:59:26 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int		nb;
	int		f;

	nb = -5;
	f = ft_recursive_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 0;
	f = ft_recursive_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 1;
	f = ft_recursive_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	nb = 5;
	f = ft_recursive_factorial(nb);
	printf("factorial of %i: %i\n", nb, f);
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
