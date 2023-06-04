
#include <unistd.h>

void    print_first_word(char *str);

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        print_first_word(argv[1]);
    }
    write(1, "\n", 1);
    return (0);
}

void    print_first_word(char *str)
{
    int i;

    i = 0;
    while ((str[i] < 33 || str[i] > 126) && str[i] != '\0')
    {
        i++;
    }
    while (str[i] > 32 && str[i] < 127)
    {
        write(1, &str[i], 1);
        i++;
    }
}