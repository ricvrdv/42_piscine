#include <stdio.h>

int     ft_recursive_power(int nb, int power)
{
        if (power == 0)
                return (1);
        if (power < 0)
                return (0);
        return (nb * ft_recursive_power(nb, power - 1));
}

/*int   main(void)
{
        int     num;

        num = ft_recursive_power(2, 3);
        printf("%i power %i = %i", 2, 3, num);
}*/