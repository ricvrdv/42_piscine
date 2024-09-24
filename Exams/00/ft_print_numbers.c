#include <unistd.h>

void    ft_print_numbers(void)
{
        char    dig;

        dig = '0';
        while (dig <= '9')
        {
                write(1, &dig, 1);
                dig++;
        }
}

int     main(void)
{
        ft_print_numbers();
        return (0);
}
