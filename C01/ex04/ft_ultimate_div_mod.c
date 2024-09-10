/*#include <stdio.h>*/

void    ft_ultimate_div_mod(int *a, int *b);

void    ft_ultimate_div_mod(int *a, int *b)
{
        int     div;
        int     mod;

        if (*b != 0)
        {
                div = *a / *b;
                mod = *a % *b;
                *a = div;
                *b = mod;
        }
}

/*int   main(void)
{
        int     n1 = 15;
        int     n2 = 5;
        int     *a = &n1;
        int     *b = &n2;
        
        printf("n1 = %i n2 = %i\n", n1, n2); 
        ft_ultimate_div_mod(a, b);
        printf("n1 / n2 = %i\nremainder = %i\n", *a, *b);
}*/