#include <stdio.h>

int     ft_atoi(const char *str)
{
        int     i;
        int     sign;
        int     result;

        i = 0;
        sign = 1;
        result = 0;
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
                i++;
        }
        if (str[i] == '-')
        {
                sign = -1;
                while (str[i] == '-' || str[i] == '+')
                {
                        i++;
                }
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10 + (str[i] - 48);
                i++;
        }
        return (result * sign);
}

/*int   main(int argc, char *argv[])
{
        printf("Number is = %d", ft_atoi(argv[1]));
        return (0);             
}*/