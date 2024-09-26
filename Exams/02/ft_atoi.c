#include <stdio.h>

int     ft_atoi(const char *str)
{
        int     i;
        int     result;
        int     sign;

        i = 0;
        sign = 1;
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        {
                i++;
        }
        if (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        sign = -1;
                i++;
        }
        result = 0;
        while (str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10 + (str[i] - '0');
                i++;
        }
        return (result * sign);
}

int     main(void)
{
        char    *string = "       --+56ab34";

        printf("String is :\n%s\n\n", string);
        printf("Number is :\n%d\n", ft_atoi(string));
        return (0);
}
