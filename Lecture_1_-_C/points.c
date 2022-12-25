#include <cs50.h>
#include <stdio.h>

int main(void)
/*
{
    int points = get_int("How many points did you lose? ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else // if (points == 2) - Don't need 
    {
        printf("You lost the same number of points as me.\n");
    }
}
*/

// But in our program, we’ve included the same magic number, or value that comes from somewhere unknown, in two places. Instead of comparing the number of points against 2 in both cases manually, we can create a constant, a variable that we aren’t able to change:

{
    const int MINE = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}

// The const keyword tells our compiler to ensure that the value of this variable isn’t changed, and by convention the name of the variable should be in all uppercase, MINE (to represent the number of my points).