// Calculates the number of boxes seen by line (observer)
int     calculate_obs(char num1, char num2, char num3, char num4)
{
        int             obs;
        int             i;
        char    max_height;
        char    nums[3];

        obs = 1;
        i = 0;
        max_height = num1;
        nums[0] = num2;
        nums[1] = num3;
        nums[2] = num4;
        while (i < 3)
        {
                if (nums[i] > max_height)
                {
                        max_height = nums[i];
                        obs++;
                }
                i++;
        }
        return (obs);
}
