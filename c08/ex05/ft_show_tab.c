
#include <unistd.h>

void    ft_show_tab(struct s_stock_str *par);

int main(void)
{
    int		i;
	int		ac;
	char	**av;
	t_stock_str	*par;

	i = 0;
	ac = 3;
	av = (char **) malloc(ac * sizeof(char*));
	av[0] = "test";
	av[1] = "string";
	av[2] = "";
	par = ft_strs_to_tab(ac, av);
	while (i <= ac)
    {
        ft_show_tab(par[i]);
        i++;
    }
    return (0);
}

void    ft_show_tab(struct s_stock_str *par)
{
    int     i;

    i = 0;
    while (par[i].str != 0)
    {
        write(1, par[i].str, par[i].size);
        write(1, "\n", 1);
        

    }
}