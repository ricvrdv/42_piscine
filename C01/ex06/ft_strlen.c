/*#include <stdio.h>*/

int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

/*int   main(void)
{
        printf("%d\n", ft_strlen("Ok\n"));
        return (0);
}*/