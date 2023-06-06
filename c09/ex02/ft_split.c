/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:25:18 by tmitchel          #+#    #+#             */
/*   Updated: 2023/06/05 20:18:36 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		is_sep(char c, char *charset);
char	*malloc_word(char *str, char *charset, int *i);
char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	*str;
	char	*charset;
	char	**array;
	int		i;

	i = 0;
	str = "+ +1 test str213ing y$%^&";
	charset = "123";
	array = ft_split(str, charset);
	while (array[i] != NULL)
	{
		printf("%s\n", array[i]);
		i++;
	}
	return (0);
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

int	is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*malloc_word(char *str, char *charset, int *i)
{
	char	*word;
	int		j;
	int		k;

	j = 0;
	while ((str[*i + j] != '\0') && (is_sep(str[*i + j], charset) == 0))
	{
		j++;
	}
	word = (char*) malloc((j + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	k = 0;
	while ((str[*i] != '\0') && (is_sep(str[*i], charset) == 0))
	{
		word[k] = str[*i];
		k++;
		(*i)++;
	}
	word[k] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	result = (char **) malloc((len + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (is_sep(str[i], charset) == 1))
			i++;
		if (str[i] != '\0' && (is_sep(str[i], charset) == 0))
		{
			result[j] = malloc_word(str, charset, &i);
			j++;
		}
	}
	result[j] = 0;
	return (result);
}
