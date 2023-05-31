#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int		x;
	int		result;
	int		nox;

	x = -42;
	result = ABS(x);
	printf("ABS value of %i = %i\n", x, result);
	nox = ABS(142);
	printf("No x ABS value of 142 is %i\n", nox);
	nox = ABS(-14);
	printf("No x ABS value of -14 is %i\n", nox);
	return (0);
}
