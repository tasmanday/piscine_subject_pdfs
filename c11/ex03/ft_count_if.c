/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:52:05 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/11 14:42:53 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char	**tab, int length, int(*f)(char *));
/* int		ft_a(char *tab);

int	main(void)
{
	char	*tab[5];
	int		r;

	tab[0] = "test";
	tab[1] = "string";
	tab[2] = "a";
	tab[3] = "tas";
	tab[4] = "TASMAN!1234";
	r = ft_count_if(tab, 5, ft_a);
	printf("%i\n", r);
	return (0);
}

int	ft_a(char *tab)
{
	int		i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == 'a')
			return (1);
		i++;
	}
	return (0);
} */

int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
