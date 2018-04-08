#include<stdio.h>
#include<string.h>
#include<cs50.h>

int height;

int main(void)
{

    do
    {

        height = get_int("Height:");

    }
    while (height < 0 || height >= 24);

    // initialize value
    int num_blank = height - 1;
    int num_block = 2;
    while (num_blank >= 0)
    {
        // print white space first
        for (int b = 0; b < num_blank; b++)
        {
            printf(" ");
        }
        // print blocks second
        for (int s = 0; s < num_block; s++)
        {
            printf("#");
        }

        printf("\n");
        // update count
        ++num_block;
        --num_blank;

    }


    return 0;

}