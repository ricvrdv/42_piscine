#include <stdlib.h>
#include "ft_stock_str.h"

int     ft_strlen(char *str)
{
        int     c;

        c = 0;
        while (str[c] != '\0')
        {
                c++;
        }
        return (c);
}

char    *ft_strdup(char *src)
{
        int             i;
        int             len;
        char    *dup_str;

        len = 0;
        while (src[len] != '\0')
        {
                len++;
        }
        dup_str = (char *)malloc(sizeof (char) * (len + 1));
        if (dup_str == NULL)
                return (NULL);
        i = 0;
        while (i < len)
        {
                dup_str[i] = src[i];
                i++;
        }
        dup_str[len] = '\0';
        return (dup_str);
}

struct s_stock_str      *ft_strs_to_tab(int ac, char **av)
{
        t_stock_str     *tab;
        int                     i;

        tab = malloc(sizeof (t_stock_str) * (ac + 1));
        if (tab == NULL)
                return (NULL);
        i = 0;
        while (i < ac)
        {
                tab[i].size = ft_strlen(av[i]);
                tab[i].str = av[i];
                tab[i].copy = ft_strdup(av[i]);
                i++;
        }
        tab[i].str = 0;
        return (tab);
}
