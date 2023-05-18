/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:04:57 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/18 21:08:27 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(5);
}

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
	}
	else
	{
		c = 'P';
		write(1, &c, 1);
	}
}
