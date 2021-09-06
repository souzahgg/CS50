// This program is to create a Mario pyramid like

#include <cs50.h>
#include <stdio.h>

void printSpaces(int num_spaces);
void printHashes(int num_hashes);
void printMidSpaces();
void nextLine();

int main(void)
{
    // Choose the height of the pyramid
    int pyr_height;
    do
    {
        pyr_height = get_int("What is the height of the pyramid: ");
    }
    while (pyr_height < 1 || pyr_height > 8);

    // Making the pyramid
    for (int row = 0; row < pyr_height; row++)
    {
        printSpaces(pyr_height - (row + 1));
        printHashes(row + 1);
        printMidSpaces();
        printHashes(row + 1);
        nextLine();
    }
}

// Printing spaces
void printSpaces(int num_spaces)
{
    for (int i = 1; i <= num_spaces; i++)
    {
        printf(" ");
    }
}

// Printing hashes
void printHashes(int num_hashes)
{
    for (int i = 1; i <= num_hashes; i++)
    {
        printf("#");
    }
}

// Printing middle spaces
void printMidSpaces()
{
    printf("  ");
}

void nextLine()
{
    printf("\n");
}