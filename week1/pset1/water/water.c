#include<stdio.h>
#include<string.h>
#include<cs50.h>

int main(void)
{
    int min;
    do
    {
        min = get_int("min in shower:");
    }
    while(min < 0);

    // rate = 1 min of shower = 12 bottles of water
    int num_bottles = min * 12;
    printf("Minutes: %i\n", min);
    printf("Bottles: %i\n", num_bottles);

}

/* code is clean and variables are named clearly and concisely */