/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:01:13 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/31 12:26:44 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int		nb;
	int		root;

	nb = 16;
	root = ft_sqrt(nb);
	printf("The square root of %i is %i\n", nb, root);
	nb = 17;
	root = ft_sqrt(nb);
	printf("The square root of %i is %i\n", nb, root);
	return (0);
}

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;

	if (n == 0)
		return (0);
	i = 1;
	if (n > 0)
		while (i * i <= n)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	return (0);
}
