#include <unistd.h>

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        if (!str)
                return ;
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

/*int   main(int argc, char *argv[])
{
        if (argc == 2)
        {
                ft_putstr(argv[1]);
        }
        return (0);
}*/