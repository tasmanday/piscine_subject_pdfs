#include <unistd.h>

void ft_print_number(void);

int main(void)
{
	ft_print_number();
}

void ft_print_number(void)
{
	for(char i = '0'; i <= '9'; i++)
	{
		write(1, &i, 1);
	}
}

