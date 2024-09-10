/*#include <stdio.h>*/

void    ft_div_mod(int a, int b, int *div, int *mod);

void    ft_div_mod(int a, int b, int *div, int *mod)
{
        if (b != 0)
        {
                *div = a / b;
                *mod = a % b;
        }
}

/*int   main(void)
{
        int     a = 4;
        int     b = 2;
        int     d = a / b;
        int     m = a % b;
        int     *div = &d;
        int     *mod = &m;

        ft_div_mod(a, b, div, mod);
        printf("a = %i\nb = %i\na / b = %i\nremainder = %i\n", a, b, *div, *mod);
}*/