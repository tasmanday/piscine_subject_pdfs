#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(49204058);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb > -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}

		else if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
			ft_putnbr(nb);
		}

		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}

		else
		{
			ft_putchar('0' + nb);
		}
	}
}
