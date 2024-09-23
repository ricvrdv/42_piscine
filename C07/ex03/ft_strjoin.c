#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

int     ft_total_len(int size, char **strs, char *sep)
{
        int     i;
        int     sizestr;

        i = 0;
        sizestr = 0;
        while (i < size)
        {
                sizestr += ft_strlen(strs[i]);
                i++;
        }
        sizestr += ft_strlen(sep) * (size - 1);
        return (sizestr);
}

char    *ft_strcpy(char *dest, char *src)
{
        int     i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
        char    *str;
        char    *temp;
        int             i;

        i = 0;
        if (size == 0)
                return ((char *)malloc(sizeof(char)));
        str = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
        if (!str)
                return (0);
        temp = str;
        while (i < size)
        {
                ft_strcpy(temp, strs[i]);
                temp += ft_strlen(strs[i]);
                if (i < size - 1)
                {
                        ft_strcpy(temp, sep);
                        temp += ft_strlen(sep);
                }
                i++;
        }
        *temp = '\0';
        return (str);
}

/*int   main(void)
{
        char    **strings;
        char    *separators = "_._";
        char    *joined;

        strings = (char**)malloc(sizeof(strings) * 5);
        strings[0] = "Oops,";
        strings[1] = "I";
        strings[2] = "did it";
        strings[3] = "again...";

        joined = ft_strjoin(4, strings, separators);
        printf("%s", joined);
        return (0);
}*/
