/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adatta-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 10:53:27 by adatta-g          #+#    #+#             */
/*   Updated: 2023/05/21 20:24:47 by tmitchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	rush00(int col, int row);		// prototypes: lets main know that the other functions exist //
void	rush01(int col, int row);
void	rush02(int col, int row);
void	rush03(int col, int row);
void	rush04(int col, int row);
int		char_to_int(char *str);
void	rush0_(char *rush0, int ix, int iy);

int	main(int argc, char *argv[])		// int argc: is the number of command line arguments, counts
						   a.out as the first 
						   int argv: is a pointer to the array of strings that are the
						   command line arguments //
{
	int		ix;
	int		iy;

	if (argc != 4)				// if (argc != 4 ensures that there are 3 command line arguments
	{					   after the program name, eg. (./a.out rush0* x y) //
		return (1);
	}
	ix = char_to_int(argv[2]);		// sets ix and iy to the ints you get when you feed the string of 
	iy = char_to_int(argv[3]);		   chars that are the 3rd & 4th arguments into the char_to_int
						   function //

	if ((ix < 0) && (iy < 0))		// terminated the program if the resulting int is < 0, this stops
	{					   			// chars before '0' on the ascii chart being used. I didn't code
		return (2);			   		// a way to stop chars above '9' because it was more difficult //
	}
	rush0_(argv[1], ix, iy);		// feeds the second argument, ix, & iy into rush0_ function //

	write(1, "\n", 1);			// adds a new line at the end //

	return (0);				// terminates the program
}

int	char_to_int(char *str)			// converts the string of chars from the command line arguments
{						   into an int, essentially atoi //
	int		result;
	int		i;

	result = 0;
	i = 0;
	while (str[i] != '\0')				// iterates through the individual chars of the string
	{						   until it gets to the null at the end //

		result = result * 10 + (str[i] - '0');	// converts the string to an int by looking at the first
		i++;					   char and subtracting '0'. Then if there is another
	}						   char it multiplies the previous result by 10 and 
	return (result);				   subtracts '0' from the next one //
}

void	rush0_(char *rush0, int ix, int iy)	// looks at the 6th char of the 2nd arg to determine which
{						   function needs to be run //
	if (rush0[5] == '0')
	{
		rush00(ix, iy);
	}
	if (rush0[5] == '1')
	{
		rush01(ix, iy);
	}
	if (rush0[5] == '2')
	{
		rush02(ix, iy);
	}
	if (rush0[5] == '3')
	{
		rush03(ix, iy);
	}
	if (rush0[5] == '4')
	{
		rush04(ix, iy);
	}
}
