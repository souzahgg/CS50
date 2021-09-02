// Program to use greedy algorithm to determine minimum number of coins for a change

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Asking user for the change
    float change;
    do
    {
        change = get_float("How much change is owed: ");
    }
    while (change < 0);

    // converting fraction to integer
    int cents = round(100 * change);

    // Keeping track of number of coins
    int coin_count = 0;
    int change_remain = cents;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // Calculating how many coins according to greed algorithm
    if (cents >= quarter)
    {
        do
        {
            change_remain = (change_remain - quarter);
            ++coin_count;
        }
        while (change_remain >= quarter);
    }

    if (change_remain >= dime)
    {
        do
        {
            change_remain = (change_remain - dime);
            ++coin_count;
        }
        while (change_remain >= dime);

    }

    if (change_remain >= nickel)
    {
        do
        {
            change_remain = (change_remain - nickel);
            ++coin_count;
        }
        while (change_remain >= nickel);
    }

    if (change_remain >= penny)
    {
        do
        {
            change_remain = (change_remain - penny);
            ++coin_count;
        }
        while (change_remain >= 1);
    }

    // Printing result
    printf("%i\n", coin_count);
}
