/*#include <stdio.h>*/

void    ft_swap(int *a, int *b)
{
        int     temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

/*int   main(void)
{
        int     num1 = 42;
        int     num2 = -42;
        int     *a = &num1;
        int     *b = &num2;

        printf("Before:\nnum1 = %i\nnum2 = %i\n\n", num1, num2);

        ft_swap(a, b);
        printf("Now:\nnum1 = %i\nnum2 = %i\n", num1, num2);
}*/