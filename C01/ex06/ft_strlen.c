/*#include <stdio.h>*/

int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
        int     count;
        int     i;

        count = 0;
        i = 0;
        while (str[i] != '\0')
        {
                count++;
                i++;
        }
        return (count);
}

/*int   main(void)
{
        printf("%d\n", ft_strlen("Ok\n"));
        return (0);
}*/