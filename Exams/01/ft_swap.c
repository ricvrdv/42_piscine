#include <stdio.h>

void    ft_swap(int *a, int *b)
{
        int     temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

int     main(void)
{
        int     num_a = 0;
        int     num_b = 1;
        int     *a = &num_a;
        int     *b = &num_b;

        printf("num1 = %d num2 = %d\n", num_a, num_b);
        ft_swap(a, b);
        printf("num1 = %d num2 = %d\n", num_a, num_b);
        return (0);
}
