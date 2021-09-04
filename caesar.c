// Program to encrypts messages using Caesar’s cipher.

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Getting the key from the user
int main(int argc, string argv[])
{
    // Checking the key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    // string to int using atoi
    int k = atoi(argv[1]) % 26;

    // Getting text from user
    string p = get_string("plaintext: ");
    printf("ciphertext:");

    // Checking if a char is not a letter
    for (int i = 0; i < strlen(p); i++)
    {
        if (!isalpha(p[i]))
        {
            printf("%c", p[i]);
            continue;
        }
        // How far from A or a
        int ascii_a = (islower(p[i]) ? 97 : 65);

        // Calculating cipher text
        int pi = p[i] - ascii_a;
        int ci = (pi + k) % 26;
        printf("%c", ci + ascii_a);
    }
    printf("\n");
    return 0;
}