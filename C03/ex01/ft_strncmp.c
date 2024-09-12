//#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
        {
                if (s1[i] != s2[i])
                {
                        return ((s1[i] - s2[i]));
                }
                i++;
        }
        return (0);
}

/*int   main(void)
{
        char    *str1 = "abcd";
        char    *str2 = "afcd";
        int     res1 = ft_strncmp(str1, str2, 3);
        int     res2 = ft_strncmp(str1, str2, 2);
        int     res3 = ft_strncmp(str1, str2, 0);

        printf("abcd\nafcd\nresult (n = 3) = %d\n", res1);
        printf("abcd\nafcd\nresult (n = 2) = %d\n", res2);
        printf("abcd\nafcd\nresult (n = 0) = %d\n", res3);

        return (0);
}*/