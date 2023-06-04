
#include <unistd.h>

void    print_last_word(char *str);
void    putnstrn(char *str, int a, int z);

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (0);
    print_last_word(argv[1]);
    return (0);
}

void    print_last_word(char *str)
{
    int     i;
    int     a;
    int     z;
    int     in_word;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] > 32 && str[i] < 127) && !in_word)
        {
            a = i;
            in_word = 1;
        }
        if ((str[i] < 33 || str[i] > 126) && in_word)
        {
            z = (i - 1);
            in_word = 0;
        }
        i++;
    }
    if (in_word)
        z = (i - 1);
    putnstrn(str, a, z);
}

void    putnstrn(char *str, int a, int z)
{
    while (a <= z)
    {
        write(1, &str[a], 1);
        a++;
    }
    write(1, "\n", 1);
}