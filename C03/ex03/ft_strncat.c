#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
        unsigned int    i;
        unsigned int    j;

        i = 0;
        j = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        while (src[j] != '\0' && j < nb)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}

int     main(void)
{
        char    str1[20] = "Do not ";
        char    str2[] = "panic!";
        char    *dest;

        printf("Dest string: %s\tSrc string: %s\n", str1, str2);
        dest = ft_strncat(str1, str2, 3);
        printf("Cat: %s\n", dest);
        return (0);
}