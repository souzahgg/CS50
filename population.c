// Determine how long in years it takes for a population to reach a particular size

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Integer number equal or higuer to 9
    int start_size;
    do
    {
        start_size = get_int("What is the start size of the population: ");
    }
    while (start_size < 9);

    // Integer number equal or higuer than "start_size" number
    int end_size;
    do
    {
        end_size = get_int("What is the end size of the population: ");
    }
    while (end_size < start_size);

    // Number of years for population reach the "end_size" number
    int current_pop = start_size;
    int years_passed = 0;
    
    while (current_pop < end_size)
    {
        current_pop = round(current_pop + (current_pop / 3) - (current_pop / 4));
        years_passed++;
    }
    printf("Years: %i\n", years_passed);
}