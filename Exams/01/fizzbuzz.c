#include <unistd.h>

int main(void)
{
    int i;
    char    c;
    char    c_div;
    char    c_mod;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else if (i < 10)
        {
            c = i + '0';
            write(1, &c, 1);
            write(1, "\n", 1);
        }
        else
        {
            c_div = i / 10 + '0';
            c_mod = i % 10 + '0';
            write(1, &c_div, 1);
            write(1, &c_mod, 1);
            write(1, "\n", 1);
        }
        i++;
    }
    return (0);
}