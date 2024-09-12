//#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        while (src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

/*int     main(void)
{
        char    str1[20] = "Just";
        char    str2[] = " panic!";
        char    *dest;

        printf("Dest string: %s\tSrc string: %s\n", str1, str2);
        dest = ft_strcat(str1, str2);
        printf("Cat: %s\n", dest);
        return (0);
}*/