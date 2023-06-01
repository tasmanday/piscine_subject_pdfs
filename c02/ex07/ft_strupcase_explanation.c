/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:37:36 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 18:53:18 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strupcase(char *str);

/* int	main(void)
{
	char	str[] = "hello ~12";
	char	*dest;


	dest = ft_strupcase(str);
	printf("%s\n", dest);
	return (0);
} */

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')     // looks through te string to find lowercase letters
		{
			str[i] = str[i] - 32;               // subtracts 32 from the ASCII value to change them to uppercase
		}
		i++;
	}
	return (str);
}
