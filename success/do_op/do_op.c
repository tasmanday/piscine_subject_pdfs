/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:31:44 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 21:03:21 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_calc(char *va, char *vsign, char *vb);

int	main(int argc, char *argv[])
{
	char	s;
	
	if (argc != 4)
	{
		printf("\n");
		return (1);
	}
	s = argv[2][0];
	if (s == '+' || s == '-' || s == '*' || s == '/' || s == '%')
	{
		ft_calc(argv[1], argv[2], argv[3]);
		return (0);
	}
	else
	{
		printf("\n");
		return (1);
	}
}

void	ft_calc(char *va, char *vsign, char *vb)
{
	int		a;
	int		b;
	int		c;

	a = atoi(va);
	b = atoi(vb);
	c = 0;
	if (vsign[0] == '+')
		c = (a + b);
	else if (vsign[0] == '-')
		c = (a - b);
	else if (vsign[0] == '*')
		c = (a * b);
	else if (vsign[0] == '/')
		c = (a / b);
	else
		c = (a % b);
	printf("%i\n", c);
}
