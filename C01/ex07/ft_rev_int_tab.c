/*#include <stdio.h>*/

void    ft_rev_int_tab(int *tab, int size);

void    ft_rev_int_tab(int *tab, int size)
{
        int     i;
        int     j;
        int     temp;

        i = 0;
        j = size - 1;
        while (i < j)
        {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
                i++;
                j--;
        }
}

/*int   main(void)
{
        int     tab[] = {0, 1, 2, 3};
        int     i;
        
        size = 0;
        for (i = 0; tab[i] != '\0'; i++)
        {
                size++;
        }

        ft_rev_int_tab(tab, 4);
        
        for (i = 0; i < 4; i++)
        {
                printf("%d", tab[i]);
        }

        return (0);
}*/