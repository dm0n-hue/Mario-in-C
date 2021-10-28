// Program is to mimick the beginning of World 1-1 in Nintendo’s Super Mario Brothers, where Mario must hop over adjacent pyramids of blocks
// Used hash (#) symbols as a "block" to create the pyramids

// Calling libraries supplied by the CS50 staff, as well as the C library
#include <stdio.h>
#include <cs50.h>

int main(void) // main function
{

    int height; // variable that'll obtain a user entered integer

    do
    {
        height = get_int("Height: "); // 'get_int' is a part of the CS50 library that allows ease of use for those learning C for the first time
    }
    while (height >= 9 || height <= 0); // do-while loop that goes through the loop first with no condition.
                                        // if condition met, do-while loop breaks. else, the loop will loop again until condition met

    int count = 0; // 'count' variable used to check conditions and execute performance of code in main for loop
    for (int i = 0; i <= height; i++) // main for loop using user entered integer to check condition and update 'i' variable to execute performance of the code
    {
        if (count != height) // if 'count' isn't the same as 'height', perform functions inside if statement
        {
            for (int s = (height - 1) - count; s > 0; s--)
            {
                printf(" ");
            } // creates spaces for the amount of "blocks" entered in 'height' by the user on a single line, subtracted by 1

            for (int j = 0; j <= count; j++)
            {
                printf("#");
            } // creates an amount of "blocks" based on 'count'

            printf("  "); // space between the adjacent pyramids

            for (int f = 0; f <= count; f++)
            {
                printf("#");
            } // creates a mirror of the adjacent pyramid being created in the previous inner for loops

            printf("\n"); // creates a new line
            count++; // increments 'count' so that more blocks are created until it's the same value as 'height'
        }
    }
}