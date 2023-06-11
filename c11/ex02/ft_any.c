/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:16:14 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/11 14:30:24 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char	**tab, int(*f)(char *));
/* int		ft_a(char *tab);

int	main(void)
{
	char	*tab[3];
	int		r;

	tab[0] = "test";
	tab[1] = "string";
	tab[2] = NULL;
	r = ft_any(tab, ft_a);
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

int	ft_any(char **tab, int(*f)(char *))
{
	int		i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
