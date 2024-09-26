#include <stdlib.h>

char    *ft_strdup(char *src)
{
        int     i;
        int     len;
        char    *str_dup;

        len = 0;
        while (src[len] != '\0')
        {
                len++;
        }
        str_dup = (char*)malloc(sizeof(char) * (len + 1));
        if (str_dup == NULL)
                return (NULL);
        i = 0;
        while (i < len)
        {
                str_dup[i] = src[i];
                i++;
        }
        str_dup[len] = '\0';
        return (str_dup);
}
