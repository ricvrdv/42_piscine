#include <unistd.h>

void    ft_putstr(char *str)
{
        int     i;

        if (!str)
                return ;
        i = 0;
        while (*str)
        {
                write (1, &*str, 1);
                str++;
        }
}

/*int   main(int argc, char *argv[])
{
        (void)argc;
        ft_putstr(argv[1]);
        return (0);
}*/
