/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:54:45 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/30 19:36:49 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		ft_total_len(int size, char **strs, char *sep);
char	*ft_strcpy(char *dest, char *src);
char	*if_zero(void);

/* int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	char	*result;

	size = 4;
	strs = (char **) malloc(size * sizeof(char *));
	strs[0] = "These";
	strs[1] = "strings";
	strs[2] = "are";
	strs[3] = "concatenated.";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
	free(strs);
	return (0);
} */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		c;

	i = 0;
	c = 0;
	if (size <= 0)
		return (if_zero());
	result = (char *) malloc((ft_total_len(size, strs, sep)) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcpy(result + c, strs[i]);
		c += ft_strlen(strs[i]);
		if (i < (size - 1))
		{
			ft_strcpy(result + c, sep);
			c += ft_strlen(sep);
		}
		i++;
	}
	result[c] = '\0';
	return (result);
}

char	*if_zero(void)
{
	char	*result;

	result = (char *) malloc(1 * sizeof(char));
	result[0] = '\0';
	return (result);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	int		sep_len;

	i = 0;
	total_len = 0;
	sep_len = (ft_strlen(sep) * (size - 1));
	while (i < size)
	{
		total_len += ft_strlen((strs)[i]);
		i++;
	}
	total_len += sep_len;
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

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
