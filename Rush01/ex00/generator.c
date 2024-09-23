// Checks for repeated digits by line (first horizontal then vertical).
// Returns 1 if there are repeated numbers.
int     verifier(char *c)
{
        int     i;

        i = 0;
        while (i < 4)
        {
                if (c[1 + 4 * i] == c[2 + 4 * i] || c[1 + 4 * i] == c[3 + 4 * i]
                        || c[1 + 4 * i] == c[4 + 4 * i] || c[2 + 4 * i] == c[3 + 4 * i]
                        || c[2 + 4 * i] == c[4 + 4 * i] || c[3 + 4 * i] == c[4 + 4 * i])
                        return (1);
                i++;
        }
        i = 0;
        while (i < 4)
        {
                if (c[1 + i] == c[5 + i] || c[1 + i] == c[9 + i]
                        || c[1 + i] == c[13 + i] || c[5 + i] == c[9 + i]
                        || c[5 + i] == c[13 + i] || c[9 + i] == c[13 + i])
                        return (1);
                i++;
        }
        return (0);
}

// Declares the values inside the matrix
void    initiator(char *c)
{
        c[0] = '0';
        c[1] = '1';
        c[2] = '1';
        c[3] = '1';
        c[4] = '1';
        c[5] = '1';
        c[6] = '1';
        c[7] = '1';
        c[8] = '1';
        c[9] = '1';
        c[10] = '1';
        c[11] = '1';
        c[12] = '1';
        c[13] = '1';
        c[14] = '1';
        c[15] = '1';
        c[16] = '0';
        c[17] = '\0';
}
