//#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

char    *ft_strcpy(char *dest, char *src)
{
        char    *dest_start = dest;

        while (*src)
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return dest_start;
}

/*int   main(void)
{
        char    str1[30] = "Hello World!";
        char    str2[30] = "Bye.";

        ft_strcpy(str2, str1);
        printf("str1: %s\nstr2: %s\n", str1, str2);
}*/