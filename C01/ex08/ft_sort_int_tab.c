/*#include <stdio.h>*/

void    ft_sort_int_tab(int *tab, int size);

void    ft_sort_int_tab(int *tab, int size)
{
        int     i;
        int     j;
        int     temp;

        i = 0;
        while (i < size - 1)
        {
                j = 0;
                while (j < size - 1 - i)
                {
                        if (tab[j] > tab[j + 1])
                        {
                                temp = tab[j];
                                tab[j] = tab[j + 1];
                                tab[j + 1] = temp;
                        }
                        j++;
                }
                i++;
        }
}

/*int   main(void)
{
        int     tab[] = {4,1,0,0,2};
        int     i;

        ft_sort_int_tab(tab, 5);
        for (i = 0; i < 5; i ++)
        {
                if (i == 4)
                {
                        printf("%d", tab[i]);
                }
                else if (i < 4)
                {
                        printf("%d, ", tab[i]);
                }
        }
        return (0);
}*/