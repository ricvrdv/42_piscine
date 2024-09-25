#include <unistd.h>

int     main(int argc, char *argv[])
{
        int     i;

        if (argc == 4)
        {
                i = 0;
                while (argv[2][i] != '\0' || argv[3][i] != '\0')
                {
                        i++;
                        if (i > 1)
                        {
                                write(1, "\n", 1);
                                return (1);
                        }
                }
                i = 0;
                while (argv[1][i] != '\0')
                {
                        if (argv[1][i] == argv[2][0])
                        {
                                write(1, &argv[3][0], 1);
                                i++;
                        }
                        else
                        {
                                write(1, &argv[1][i], 1);
                                i++;
                        }
                }
        }
        write(1, "\n", 1);
        return (0);
}