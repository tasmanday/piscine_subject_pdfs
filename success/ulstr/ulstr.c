/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 08:45:55 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 16:41:34 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ul(char *str);

int	main(int argc, char *argv[])
{	
	if (argc !=2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_ul(argv[1]);
	return (0);
}

void	ft_ul(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
			str[i] = str[i];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
