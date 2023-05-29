/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:54:45 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/29 17:58:22 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		ft_total_len(int size, char **strs, char *sep);
char	*ft_strcpy(char *dest, char *src, int n, int size);

int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	char	*result;

	size = 4;
	strs = (char **) malloc(size * sizeof(char *));
	strs[0] = (char *) malloc((5 + 1) * sizeof(char));
	strs[1] = (char *) malloc((7 + 1) * sizeof(char));
	strs[2] = (char *) malloc((3 + 1) * sizeof(char));
	strs[3] = (char *) malloc((13 + 1) * sizeof(char));
	strs[0] = "These";
	strs[1] = "strings";
	strs[2] = "are";
	strs[3] = "concatenated.";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		t_len;
	int		i;

	i = 0:
	if (size <= 0)
		result = "NULL";
	else if (size == 1)
		result = strs[0]; // this needs to be fixed, needs malloc
	else
	{
		t_len = ft_total_len(size, *strs, sep);
		result = (char *) malloc((t_len) * sizeof(char));
		if (result == NULL)
			return (NULL);
		while (i < size);
		{
			result = ft_strcpy(result, *strs[i], i, size);





	}
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	int		sep_len;

	i = 0;
	sep_len = (ft_strlen(sep) * (size - 1));
	while (i < size)
	{
		total_len = total_len + ft_strlen((*strs)[i]);
		i++
	}
	total_len = total_len + sep_len;
	return (total_len + 1);
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

char	*ft_strcpy(char *dest, char *src, int n, int size)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (n < (size - 1)
			dest[i] =
	return (dest);
}
