#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
        int     i;
        int     len;
        char    *dup_str;

        len = 0;
        while (src[len] != '\0')
        {
                len++;
        }
        dup_str = (char *)malloc((len + 1) * sizeof(char));
        if (dup_str == NULL)
                return (NULL);
        i = 0;
        while (i < len)
        {
                dup_str[i] = src[i];
                i++;
        }
        dup_str[len] = '\0';
        return (dup_str);
}

/*int   main(void)
{
        char    *str = "HELPPPPP MEEEEE";       
        
        char *cpy = ft_strdup(str);
        printf("%s", cpy);
        return (0);
}*/