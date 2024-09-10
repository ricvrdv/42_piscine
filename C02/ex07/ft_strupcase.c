//#include <stdio.h>

char    *ft_strupcase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                        str[i] -= 32;
                }
                i++;
        }
        return (str);
}

/*int   main(void)
{
        char    str[] = "panic";

        printf("Before: %s\n", str);

        ft_strupcase(str);
        printf("Now: %s\n", str);
        return (0);
}*/