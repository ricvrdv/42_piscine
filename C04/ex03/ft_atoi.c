//#include <stdio.h>

int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     result;
        int     minus_count;

        i = 0;
        sign = 1;
        result = 0;
        minus_count = 0;
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                i++;
        while (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        minus_count++;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        if (minus_count % 2 != 0)
                sign = -1;
        return (result * sign);
}

/*int   main(int argc, char *argv[])
{
        (void)argc;
        printf("Number is: %i\n", ft_atoi(argv[1]));
}*/