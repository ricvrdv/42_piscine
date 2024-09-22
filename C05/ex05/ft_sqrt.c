#include <stdlib.h>
#include <stdio.h>

int     ft_sqrt(int nb)
{
        int     i;

        i = 1;
        while (i * i <= nb)
        {
                if (i * i == nb)
                        return (i);
                else
                        i++;
        }
        return (0);
}

/*int   main(int argc, char *argv[])
{
        printf("Square root is = %i\n", ft_sqrt(atoi(argv[1])));
        return (0);
}*/