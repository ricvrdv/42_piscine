//#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
        int     res;
        int     i;

        res = 0;
        i = 0;
        while (s1[i] != '\0')
        {
                if (s1[i] == s2[i])
                {
                        i++;
                }
                if (s1[i] != s2[i])
                {
                        res += (s1[i] - s2[i]);
                        return (res);
                }
        }
        return (0);
}

/*int   main(void)
{
        char    *str1 = "abcd";
        char    *str2 = "afcd";
        int     res = ft_strcmp(str1, str2);

        printf("Result = %d\n", res); 
        return(0);
}*/