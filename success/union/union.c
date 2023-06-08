/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:25:55 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/08 19:43:53 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *s1, char *s2, char *buff);
void	ft_union(char *str);

int	main(int argc, char *argv[])
{
	char	buff[256];

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	ft_strcat(argv[1], argv[2], buff);
	ft_union(buff);
	return (0);
}

char	*ft_strcat(char *s1, char *s2, char *buff)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
	{
		buff[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		buff[i] = s2[j];
		i++;
		j++;
	}
	buff[i] = '\0';
	return (buff);
}

void	ft_union(char *str)
{
	int		i;
	int		j;
	int		printed;

	i = 0;
	while (str[i] != '\0')
	{
		j = i - 1;
		printed = 0;
		while (j >= 0)
		{
			if (str[j] == str[i])
			{
				printed = 1;
				break;
			}
			j--;
		}
		if (!printed)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
