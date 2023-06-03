
#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void    ft_show_tab(struct s_stock_str *par);
char    *ft_itoa(int size, int c);
int     size_len(int size);
/* struct s_stock_str *ft_strs_to_tab(int ac, char **av);
int		ft_strlen(char *str);
char	*ft_strdup(char*src);

int main(void)
{ 
	int		ac;
	char	**av;
	struct s_stock_str	*par;

	ac = 4;
	av = (char **) malloc(ac * sizeof(char*));
	av[0] = "test";
	av[1] = "string";
	av[2] = "";
    av[3] = "-1234567890";
	par = ft_strs_to_tab(ac, av);
    ft_show_tab(par);
    free(av);
    free(par);
    return (0);
} */

void    ft_show_tab(struct s_stock_str *par)
{
    int     i;
    int     c;
    char    *char_size;

    i = 0;
    while (par[i].str != 0)
    {
        c = size_len(par[i].size);
        char_size = ft_itoa(par[i].size, c);
        write(1, par[i].str, par[i].size);
        write(1, "\n", 1);
        write(1, char_size, c);
        write(1, "\n", 1);
        write(1, par[i].copy, par[i].size);
        write(1, "\n", 1);
        free(char_size);
        i++;
    }
}

char    *ft_itoa(int size, int c)
{
    char    *str;
    int     i;

    str = (char *) malloc((c + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    str[c] = '\0';
    i = (c - 1);
    while (i >= 0)
    {
        str[i] = size % 10 + '0';
        size /= 10;
        i--;
    }
    return (str);
}

int size_len(int size)
{
    int     c;

    if (size == 0)
        return (1);
    c = 0;
    while (size != 0)
    {
        (size /= 10);
        c++;
    }
    return (c);
}

/* struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int		i;

	i = 0;
	array = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[ac].size = 0;
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
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
} */