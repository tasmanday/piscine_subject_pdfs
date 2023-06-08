/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:47:16 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 16:14:41 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_let_num(char c);
void	ft_repeat_alpha(char *str);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}

int	ft_let_num(char c)
{
	int		n;

	if (c >= 'A' && c <= 'Z')
		n = c - 64;
	else
		n = c - 96;
	return (n);
}

void	ft_repeat_alpha(char *str)
{
	int		i;
	int		n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			write(1, &str[i], 1);
		else
		{
			n = ft_let_num(str[i]);
			while (n > 0)
			{
				write(1, &str[i], 1);
				n--;
			}
		}
		i++;
	}
}
