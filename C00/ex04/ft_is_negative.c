#include <unistd.h>

void    ft_is_negative(int n)
{
        char    negative;
        char    positive;

        negative = 'N';
        positive = 'P';
        if (n < 0)
        {
                write(1, &negative, 1);
        }
        else
        {
                write(1, &positive, 1);
        }
}

/*int   main(void)
{
        ft_is_negative(-42);
        return (0);
}*/