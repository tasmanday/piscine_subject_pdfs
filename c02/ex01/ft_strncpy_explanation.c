/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmitchel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:28:52 by tmitchel          #+#    #+#             */
/*   Updated: 2023/05/24 16:04:17 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;								// declare src as a pointer to char (which will point to the source string)
	char	dest[6];							// declare dest as an array of char (will be the destination for the copied string)

	src = "hello, world!";						// assigns the memory address of the string "hello" to the 'src' pointer. The 'src' pointer now points to the first char of the string "hello"
	printf("src: %s, dest: %s\n", src, dest);	// prints the values of 'src' and 'dest' before the ft_strcpy function
	ft_strcpy(dest, src, 5);					// calls the ft_strcpy function passing the dest and str pointers as well as the unsigned int 5 as arguments. an unsigned int means it can never be a negative number
	printf("src: %s, dest: %s\n", src, dest);	// prints the updated values of 'src and 'dest'
	return (0);									// terminates the program
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)	// ft_strncpy returns a pointer to a char and takes 2 pointers to chars and an unsigned int as arguments. the unsigned int cannot be negative. by returning the result as a pointer to a string of chars, you can pass it directly to anouther string manipulation function or assign it to another variable
{
	unsigned int		i;						// i needs to be an unsigned int as we compare it to unsigned int 'n' in the while loop parameter

	i = 0;
	while (i < n && src[i] != '\0')				// iterate through chars in src[] one at a time until i = n or the null character is reached
	{
		dest[i] = src[i];						// copy the char at src[i] to dest[i]
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';							// add null chars to the end until the length of dest is 'n'
		i++;
	}
	return (dest);								// returns a pointer to the start of the dest string
}
