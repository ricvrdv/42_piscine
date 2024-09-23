#include <stdlib.h>
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max)
{
        int     r;
        int     *arr;

        if (min >= max)
        {
                *range = NULL;
                return (0);
        }
        r = max - min;
        arr = (int *)malloc(sizeof(int) * r);
        if (arr == NULL)
        {
                *range = NULL;
                return (-1);
        }
        *range = arr;
        r = 0;
        while (max > min)
        {
                arr[r] = min;
                min++;
                r++;
        }
        return (r);
}

/*int   main(int argc, char *argv[])
{
        int     i;
        int     r;
        int     *arr;

        (void)argc;
        r = ft_ultimate_range(&arr, atoi(argv[1]), atoi(argv[2]));
        printf("Range is = %i\n", r);
        i = 0;
        while (i < r)
        {
                printf("%d ", arr[i]);
                i++;
        }
        return (0);
}*/
