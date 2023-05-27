
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
int	nb;
int	power;
int	result;

nb = 5;
power = -2;
result = ft_iterative_power(nb, power);
printf("%i^%i = %i\n", nb, power, result);
return (0);
}

int	ft_iterative_power(int nb, int power)
{
int	i;
int	nbr;

i = 1;
nbr = nb;
if (power < 0)
return (0);
if (power == 0)
return (1);
while (i < power)
{
nb = nb * nbr;
i++;
}
return (nb);
}
