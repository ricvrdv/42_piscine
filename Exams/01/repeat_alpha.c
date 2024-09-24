#include <unistd.h>

int     main(int argc, char *argv[])
{
        int     i;
        int     j;
        int     rep;
        char    *alpha_low = "abcdefghijklmnopqrstuvwxyz";
        char    *alpha_upp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        if (argc != 2)
        {
                write(1, "\n", 1);
        }
        else
        {
                i = 0;
                while (argv[1][i] != '\0')
                {
                        j = 0;
                        if (!((argv[1][i] >= 'a' && argv[1][i] <= 'z')
                                        || (argv[1][i] >= 'A' && argv[1][i] <= 'Z')))
                        {
                                write(1, &argv[1][i], 1);
                        }
                        else if (argv[1][i] == alpha_low[j] || argv[1][i] == alpha_upp[j])
                        {
                                rep = 0;
                                while (rep <= j)
                                {
                                        write(1, &argv[1][i], 1);
                                        rep++;
                                }
                                rep = 0;
                        }
                        i++;
                }
                write(1, "\n", 1);
        }
        return (0);
}
