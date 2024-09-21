#include <stdlib.h>
#include <stdio.h>

int     ft_fibonacci(int index)
{
        if (index < 0)
                return (-1);
        if (index == 0)
                return (0);
        if (index == 1)
                return (1);
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int   main(int argc, char *argv[])
{
        int     n;

        (void)argc;
        n = ft_fibonacci(atoi(argv[1]));
        printf("Index = %i\nElement = %i\n", atoi(argv[1]), n);
        return (0);
}*/