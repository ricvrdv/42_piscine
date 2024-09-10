//#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
        int     i;

        i = 0;
        if (str[i] == '\0')
        {
                return (1);
        }
        while (str[i] != '\0')
        {
                if (!((str[i] >= 'a' && str[i] <= 'z')
                                || (str[i] >= 'A' && str[i] <= 'Z')))
                {
                        return (0);
                }
                i++;
        }
        return (1);
}

/*int   main(void)
{
        int     r1 = ft_str_is_alpha("Hello");
        int     r2 = ft_str_is_alpha("He2lo");
        int     r3 = ft_str_is_alpha("Hel o");
        int     r4 = ft_str_is_alpha("");

        printf("str1: %i\nstr2: %i\nstr3: %i\nstr4: %i\n", r1, r2, r3, r4);

        return (0);
}*/