//#include <stdio.h>

char    *ft_strlowcase(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                        str[i] += 32;
                }
                i++;
        }
        return (str);
}

char    *ft_strcapitalize(char *str)
{
    int i;

    ft_strlowcase(str);
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z')
            && !(str[i - 1] >= '0' && str[i - 1] <= '9'))
        {
            str[i] -= 32;
            i++;
        }
        while (str[i] >= 'a' && str[i] <= 'z' )
        {
            i++;
        }
        i++;


    }
    return (str);
}

/*int     main(void)
{
        char    str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

        printf("Before: %s\n", str);
        printf("After: %s\n", ft_strcapitalize(str));
        return (0);
}*/