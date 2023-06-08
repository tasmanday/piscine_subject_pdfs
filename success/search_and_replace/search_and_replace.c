/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:17:22 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/07 22:02:00 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);
char	*s_r(char *str, char *s, char *r, char *buffer);

int	main(int argc, char *argv[])
{
	char	*result;
	char	buffer[500];

	if ((argc != 4) || (argv[2][1] != '\0') || (argv[3][1] != '\0'))
	{
		write (1, "\n", 1);
		exit(1);
	}
	result = s_r(argv[1], argv[2], argv[3], buffer);
	ft_putstr(result);
	write(1, "\n", 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*s_r(char *str, char *s, char *r, char *buffer)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s[0])
		{
			buffer[i] = r[0];
		}
		else
			buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
