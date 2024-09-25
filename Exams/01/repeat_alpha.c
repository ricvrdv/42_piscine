#include <unistd.h>

int     main(int argc, char *argv[])
{
        int     letter;
        int     repeat;


        if (argc == 2)
        {
                letter = 0;
                while (argv[1][letter] != '\0')
                {
                        repeat = 1;
                        if (argv[1][letter] >= 'a' && argv[1][letter] <= 'z')
                        {
                                repeat += argv[1][letter] - 'a';
                        }
                        else if (argv[1][letter] >= 'A' && argv[1][letter] <= 'Z')
                        {
                                repeat += argv[1][letter] - 'A';
                        }
                        while (repeat)
                        {
                                write(1, &argv[1][letter], 1);
                                repeat--;
                        }
                        letter++;
                }
        }
        write(1, "\n", 1);
        return (0);
}
