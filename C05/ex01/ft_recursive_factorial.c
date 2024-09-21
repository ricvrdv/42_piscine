#include <stdlib.h>
#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
        if (nb == 0)
        {
                return (1);
        }
        if (nb < 0)
        {
                return (0);
        }
        if (nb - 1 > 0)
        {
                nb *= ft_recursive_factorial(nb - 1);
        }
        return (nb);
}

/*int   main(int argc, char *argv[])
{
        int     nb;

        (void)argc;
        nb = ft_recursive_factorial(atoi(argv[1]));
        printf("Factorial of %i = %i\n", atoi(argv[1]), nb);
        return (0);
}*/