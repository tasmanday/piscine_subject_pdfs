/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:01:13 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/28 16:51:36 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb);
int	ft_sqrt_rec(int low, int high, int nb);

/* int	main(void)
{
	int		nb;
	int		root;

	nb = 16;
	root = ft_sqrt(nb);
	printf("The square root of %i is %i\n", nb, root);
	return (0);
} */

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (ft_sqrt_rec(0, nb, nb));
}

int	ft_sqrt_rec(int low, int high, int nb)
{
	int		mid;

	if (low <= high)
	{
		mid = low + (high - low) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			return (ft_sqrt_rec(low, (mid - 1), nb));
		else
			return (ft_sqrt_rec((mid + 1), high, nb));
	}
	else
		return (0);
}
