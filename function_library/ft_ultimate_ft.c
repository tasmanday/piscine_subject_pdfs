/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:48:55 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 15:43:32 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_ft(int *********nbr);

/* int	main(void)
{
	int		n;
	int		*nbr8;
	int		**nbr7;
	int		***nbr6;
	int		****nbr5;
	int		*****nbr4;
	int		******nbr3;
	int		*******nbr2;
	int		********nbr1;
	int		*********nbr;

	n = 0;

	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	ft_ultimate_ft(nbr);
	printf("%i \n", n);
} */

void	ft_ultimate_ft(int *********nbr)
{	
	*********nbr = 42;
}
