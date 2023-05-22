/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:26:06 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 18:08:49 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod);

/* int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%i / %i = %i with remainder of %i \n", a, b, div, mod);
} */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
