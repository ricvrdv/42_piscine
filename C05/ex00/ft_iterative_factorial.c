#include <stdlib.h>
#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
        int     i;
        int     res;

        i = 1;
        res = nb;
        if (nb == 0)
                return (1);
        if (nb < 0)
                return (0);
        while (nb - i > 0)
        {
                res *= (nb - i);
                i++;
        }
        return (res);
}

/*int   main(int argc, char *argv[])
{
        int     nb;
        
        (void)argc;
        nb = ft_iterative_factorial(atoi(argv[1]));
        printf("Factorial of %i = %i\n", atoi(argv[1]), nb);
}*/