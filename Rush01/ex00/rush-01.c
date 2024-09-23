#include <unistd.h>

int             calculate_obs(char num1, char num2, char num3, char num4);
void    generator(char *c, char *argv, int *n_solution);
int             verifier(char *c);
void    initiator(char *c);
void    observer(char *c, char *argv, int *n_solution);
void    print_final_matrix(char *c);
void    adapting(char *arguments, char **argv);

int     main(int argc, char **argv)
{
        int             *n_solution;
        int             temp;
        char    c[18];
        char    arguments[18];

        temp = 0;
        n_solution = &temp;
        if (argc != 2)
        {
                write(1, "Error\n", 6);
                return (1);
        }
        adapting(arguments, argv);
        generator(c, arguments, n_solution);
        if (*n_solution == 0)
        {
                write(1, "Error\n", 6);
                return (1);
        }
        return (0);
}

// converts argv: passing it all to the variable arguments without spaces
void    adapting(char *arguments, char **argv)
{
        int     i;
        int     pos;

        i = 1;
        pos = 0;
        arguments[0] = '0';
        while (i <= 16 && argv[1][pos * 2])
        {
                arguments[i] = argv[1][pos * 2];
                i++;
                pos++;
        }
}

// Generates numbers inside the matrix. After that it validates with 
// the verifier function and then it calls the observer function with
// the generated string.
void    generator(char *c, char *argv, int *n_solution)
{
        int             l;
        long    i;

        l = 0;
        i = 0;
        initiator(c);
        while (i >= 0 && *n_solution == 0)
        {
                i++;
                l = 16;
                c[16] += 1;
                while (l >= 1)
                {
                        if (c[l] > '4')
                        {
                                c[l] = '1';
                                c[l - 1] += 1;
                        }
                        l--;
                }
                if (c[0] > '0')
                        i = -1;
                if (verifier(c) == 0)
                        observer(c, argv, n_solution);
        }
}

// Displays the solution of the puzzle
// showing an empty space between numbers, and the last number
// is followed by a new line.
void    print_final_matrix(char *c)
{
        int     x;
        int     y;

        x = 0;
        y = 0;
        while (y < 4)
        {
                x = 0;
                while (x < 4 -1)
                {
                        write(1, &c[y * 4 + x + 1], 1);
                        write(1, " ", 1);
                        x++;
                }
                write(1, &c[y * 4 + x + 1], 1);
                write(1, "\n", 1);
                y++;
        }
}

// Verifies if the number of boxes seen by line matches with the returned
// number of calculate_obs's function.
// Since the returned value of calculate_obs is an int the function converts
// it into a char (+48).
// If every number matches it displays the result (print_final_matrix).
void    observer(char *c, char *argv, int *n_solution)
{
        if (argv[1] == calculate_obs(c[1], c[5], c[9], c[13]) + 48
                && argv[2] == calculate_obs(c[2], c[6], c[10], c[14]) + 48
                && argv[3] == calculate_obs(c[3], c[7], c[11], c[15]) + 48
                && argv[4] == calculate_obs(c[4], c[8], c[12], c[16]) + 48
                && argv[5] == calculate_obs(c[13], c[9], c[5], c[1]) + 48
                && argv[6] == calculate_obs(c[14], c[10], c[6], c[2]) + 48
                && argv[7] == calculate_obs(c[15], c[11], c[7], c[3]) + 48
                && argv[8] == calculate_obs(c[16], c[12], c[8], c[4]) + 48
                && argv[9] == calculate_obs(c[1], c[2], c[3], c[4]) + 48
                && argv[10] == calculate_obs(c[5], c[6], c[7], c[8]) + 48
                && argv[11] == calculate_obs(c[9], c[10], c[11], c[12]) + 48
                && argv[12] == calculate_obs(c[13], c[14], c[15], c[16]) + 48
                && argv[13] == calculate_obs(c[4], c[3], c[2], c[1]) + 48
                && argv[14] == calculate_obs(c[8], c[7], c[6], c[5]) + 48
                && argv[15] == calculate_obs(c[12], c[11], c[10], c[9]) + 48
                && argv[16] == calculate_obs(c[16], c[15], c[14], c[13]) + 48)
        {
                *n_solution = *n_solution + 1;
                if (*n_solution == 1)
                        print_final_matrix(c);
        }
}

