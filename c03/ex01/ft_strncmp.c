/* #include <stdio.h> */

int ft_strncmp(char *s1, char *s2, unsigned int n);

/* int main(void)
{
    char    *s1;
    char    *s2;
    int     cmp;
    unsigned int    n;

    s1 = "abcd";
    s2 = "abc";
    n = 2;
    cmp = ft_strncmp(s1, s2, n);
    printf("%i\n", cmp);
    return (0);
} */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int     i;

    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    if (i < n)
    {
        return (s1[i] - s2[i]);
    }
    return (0);
}