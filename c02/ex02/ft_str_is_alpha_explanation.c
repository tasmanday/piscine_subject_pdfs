/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:21:09 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 17:28:02 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str);

/* int	main(void)
{
	char	*str;
	int		n;

	str = "heLL0";
	n = ft_str_is_alpha(str);
	printf("%i\n", n);
	return (0);
} */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);					// returns 1 (TRUE) if the string is empty
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);			// checks if the string contains any char that is not a letter and returns 0 (FALSE) if that is the case
		}
		i++;
	}
	return (1);
}
