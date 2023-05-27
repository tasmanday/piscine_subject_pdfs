
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
int	nb;
int	power;
int	result;

nb = 2;
power = 5;
result = ft_recursive_power(nb, power);
printf("%i^%i = %i\n", nb, power, result);
return(0);
}

int	ft_recursive_power(int nb, int power)
{
if (power < 0)
return (0);
if (power == 0)
return (1);
else
{
return (nb * ft_recursive_power(nb, power - 1));
}
}
