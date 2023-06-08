/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:18:38 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 13:45:14 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		printed;

	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (1);
	}
	while (argv[1][i] != '\0' && !printed)
	{
		if (argv[1][i] == 'a')
		{
			write(1, "a", 1);
			printed = 1;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
