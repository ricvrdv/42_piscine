#include <unistd.h>

int     main(void)
{
        char    dig;

        dig = '9';
        while (dig >= '0')
        {
                write(1, &dig, 1);
                dig--;
        }
}
