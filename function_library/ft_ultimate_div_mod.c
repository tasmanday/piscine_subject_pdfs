/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:12:43 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 18:44:52 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b);

/* int	main(void)
{
	int		a;
	int		b;

	a = 42;
	b = 10;
	printf("a = %i, b = %i \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a / b = %i, mod %i \n", a, b);
} */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
