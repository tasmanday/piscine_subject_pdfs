/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:11:13 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/28 15:35:29 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

/* int	main(void)
{
	int		index;
	int		fib;

	index = 3;
	fib = ft_fibonacci(index);
	printf("element number %i of the fibonacci sequence is %i\n", index, fib);
	return (0);
} */

int	ft_fibonacci(int index)
{
	int		fib;

	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	else
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (fib);
}
