
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;
	int	f;

	nb = 5;
	f = ft_recursive_factorial(nb);
	printf("factorial of %i is %i\n", nb, f);
	return (0);
 }

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	
}
