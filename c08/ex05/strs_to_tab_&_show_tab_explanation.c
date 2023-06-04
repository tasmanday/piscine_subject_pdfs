
#include "ft_stock_str.h"                   // user defined header, defines the struct
#include <stdlib.h>                         // for malloc
#include <unistd.h>                         // for write

void    ft_show_tab(struct s_stock_str *par);
char    *ft_itoa(int size, int c);
int     digit_count(int size);
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int		ft_strlen(char *str);
char	*ft_strdup(char*src);

int main(void)
{ 
	int		ac;
	char	**av;
	struct s_stock_str	*par;

	ac = 4;
	av = (char **) malloc(ac * sizeof(char*));  // allocates memory for the array of structs
	av[0] = "test";
	av[1] = "string";                           // initialises strings
	av[2] = "";
    av[3] = "-1234567890";
	par = ft_strs_to_tab(ac, av);               // passes strings to ft_strs_to_tab function which allocates them to an array of structs
    ft_show_tab(par);                           // prints content of arrays
    free(av);
    free(par);                                  // frees alocated memory
    return (0);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int		i;

	i = 0;
	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));     // allocates enough memory for a struct for each string from the 'av' array + struct initialised to 0 to mark the end of the array
	if (array == NULL)                      // returns 'NULL' if malloc fails to allocate memory
		return (NULL);
	while (i < ac)                          // while loop iterates over each string in 'av' and populates a struct with size, the string, & a copy of the string
	{
		array[i].size = ft_strlen(av[i]);   // '.' is used to access a member of a struct. if accesing the struct through a pointer you need to dereference first by using (*pointer).member or the shorthand which is pointer->member
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[ac].size = 0;             // populates the final struct with 0's to mark the end of the array
	array[ac].str = 0;
	array[ac].copy = 0;
	return (array);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
    while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *) malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];           // iterates through src copying each digit over to dest
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int digit_count(int size)      // returns how many digits are in size
{
    int     c;

    if (size == 0)
        return (1);         // returns 1 if size == 0 so that the program will print '0' for the size of structs with empty strings
    c = 0;
    while (size != 0)
    {
        (size /= 10);       // size = size / 10, reduces size by 1 digit and increases c by 1 each loop until size = 0
        c++;
    }
    return (c);
}

char    *ft_itoa(int size, int c)       // size is the int par.size, c is the number of digits in int size
{
    char    *str;
    int     i;

    str = (char *) malloc((c + 1) * sizeof(char));   // allocates memory for the string and '\0'
    if (str == NULL)
        return (NULL);
    str[c] = '\0';                  // sets the last char of the string to '\0'
    i = (c - 1);                    // initialises 'i' to c - 1, the last char of the string before the null terminator
    while (i >= 0)                  // iterates backwards through the string starting at the end 
    {
        str[i] = size % 10 + '0';   // converts the rightmost digit to a char
        size /= 10;                 // removes the rightmost digit by dividing size by 10
        i--;
    }
    return (str);                   // returns int size as a string of chars that can be printed
}

void    ft_show_tab(struct s_stock_str *par)
{
    int     i;
    int     c;
    char    *char_size;

    i = 0;
    while (par[i].str != 0)                     // iterates through each struct in the array
    {
        c = digit_count(par[i].size);              // calculates the number of digits in the .size feild of the current struct, stores it in int c
        char_size = ft_itoa(par[i].size, c);    // converts the .size feild from an int to a string of chars (char_size)
        write(1, par[i].str, par[i].size);      // prints the .str field using the .size field to know how many chars to print
        write(1, "\n", 1);
        write(1, char_size, c);                 // prints the string version of the .size member using c to know how many chars (digits) to print
        write(1, "\n", 1);
        write(1, par[i].copy, par[i].size);
        write(1, "\n", 1);
        free(char_size);                        // frees memory allocated to char_size before iterating onto the next struct
        i++;
    }
}