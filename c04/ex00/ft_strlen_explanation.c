/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:53:34 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/22 21:24:27 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(char *str);

/* int	main(void)
{
	char	*str;
	int		len;

	str = "hello";
	len = ft_strlen(str);
	printf("strlen = %i \n", len);
} */

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')			// iterates through the string until it gets to the null char and counts each character
	{
		i++;
	}
	return (i);
}
