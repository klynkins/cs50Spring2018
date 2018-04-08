#include <cs50.h>
#include <stdio.h>


int main(void)
{

    double input;

    do
    {

        input = get_double("Change owed:");

    }
    while (input < 0.0);

    int coins[4] = {25, 10, 5, 1};

    // round up change value to integer
    int change = input * 100;
    // store total coins and start counter
    int total_coins = 0;
    int i = 0;

    while (change > 0)
    {

        int rem = change % coins[i];
        int num_coins = change / coins[i];
        if (rem == change)
        {
            // coin larger than change
            ++i;
        }
        else
        {
            // chaneg to equal remainder
            change = rem;
            total_coins += num_coins;

        }


    }

    printf("%i\n", total_coins);

}

