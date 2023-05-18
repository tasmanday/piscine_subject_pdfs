#include <unistd.h>

void ft_print_comb(void);

int main(void)
{
	ft_print_comb();
}

void ft_print_comb(void)
{
	char digits[5];
	
	for (int i = 0; i <= 7; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			for (int k = j + 1; k <= 9; k++)
			{
				digits[0] = '0' + i;
				digits[1] = '0' + j;
				digits[2] = '0' + k;
				digits[3] = ',';
				digits[4] = ' ';

				if (i == 7 && j == 8 && k == 9)
				{
					write(1, &digits, 3);
				}
				else
				{
					write(1, &digits, 5);
				}
			}
		}
	}
}
