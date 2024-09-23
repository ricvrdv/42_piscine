#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int min, int max)
{
        int     *arr;
        int     r;

        if (min >= max)
                return (NULL);
        r = max - min;
        arr = (int *)malloc(sizeof(int) * (r));
        if (arr == NULL)
                return (NULL);
        r = 0;
        while (max > min)
        {
                arr[r] = min;
                min++;
                r++;
        }
        return (arr);
}

/*int   main(int argc, char *argv[])
{
        int     size;
        int     i;
        int     *arr;

        (void)argc;
        size = atoi(argv[2]) - atoi(argv[1]);
        arr = ft_range(atoi(argv[1]), atoi(argv[2]));
        i = 0;
        while (i < size - 1)
        {
                printf("%d, ", arr[i]);
                i++;
        }
        if (i == size - 1)
                printf("%d\n", arr[i]);
        return (0);
}*/
