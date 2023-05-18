#include <unistd.h>

void ft_print_comb2(void);

int main(void)
{
	ft_print_comb2();
}

void ft_print_comb2(void)
{
	char digits[7];

	for (int i = 0; i <= 98; i++)
	{
		for (int j = i + 1; j <= 99; j++)
		{
			digits[0] = '0' + (i / 10);
			digits[1] = '0' + (i % 10);
			digits[2] = ' ';
			digits[3] = '0' + (j / 10);
			digits[4] = '0' + (j % 10);
			digits[5] = ',';
			digits[6] = ' ';

			if (i == 98 && j == 99)
			{
				write(1, &digits, 5);
			}
			else
			{
				write(1, &digits, 7);
			}
		}
	}
}
