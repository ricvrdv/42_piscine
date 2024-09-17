//#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
        int     i;
        int     j;

        i = 0;
        while (str[i] != '\0')
        {
                j = 0;
                while (to_find[j] != '\0' && str[i + j] == to_find[j])
                {
                        j++;
                }
                if (to_find[j] == '\0')
                {
                        return (&str[i]);
                }
                i++;
        }
        return (NULL);
}

/*int   main(int argc, char *argv[])
{
        char    *substr;

        printf("Haystack: %s\nNeedle: %s\n", argv[1], argv[2]);
        substr = ft_strstr(argv[1], argv[2]);
        printf("Substring: %s\n", substr);
        return (0);
}*/