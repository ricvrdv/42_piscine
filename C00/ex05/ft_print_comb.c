#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putcomma(void)
{
        ft_putchar(',');
        ft_putchar(' ');
}

void    ft_iterate(int a, int b, int c)
{
        while (a <= '7')
        {
                b = a + 1;
                while (b <= '8')
                {
                        c = b + 1;
                        while (c <= '9')
                        {
                                ft_putchar(a);
                                ft_putchar(b);
                                ft_putchar(c);
                                if (a != '7')
                                {
                                        ft_putcomma();
                                }
                                c++;
                        }
                        b++;
                }
                a++;
        }
}

void    ft_print_comb(void)
{
        int     a;
        int     b;
        int     c;

        a = '0';
        b = a + 1;
        c = b + 1;
        ft_iterate(a, b, c);
}

/*int   main(void)
{
        ft_print_comb();
        return (0);
}*/