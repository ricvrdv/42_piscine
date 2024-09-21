#include <stdio.h>
#include <stdlib.h>

int     ft_iterative_power(int nb, int power)
{
        int     i;
        int     res;

        if (power == 0)
                return (1);
        if (power < 0)
                return (0);
        i = 1;
        res = nb;
        while (i < power)
        {
                res *= nb;
                i++;
        }
        return (res);
}

/*int   main(int argc, char *argv[])
{
        int     num;

        (void)argc;
        num = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
        printf("%i power %i = %i\n", atoi(argv[1]), atoi(argv[2]), num);
        return (0);
}*/