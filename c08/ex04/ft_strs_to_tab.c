/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:54:03 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/01 18:24:02 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int		ft_strlen(char *str);
char	*ft_strdup(char*src);

/* int	main(void)
{
	int		i;
	int		ac;
	char	**av;
	t_stock_str	*result;

	i = 0;
	ac = 3;
	av = (char **) malloc(ac * sizeof(char*));
	av[0] = "test";
	av[1] = "string";
	av[2] = "";
	result = ft_strs_to_tab(ac, av);
	while (i <= ac)
	{
		printf("size: %i, str: %s, copy: %s\n", result[i].size, result[i].str, result[i].copy);
		i++;
	}	
	return (0);
} */

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int		i;

	i = 0;
	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[ac].size = 0;
	array[ac].str = 0;
	array[ac].copy = 0;
	return (array);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
