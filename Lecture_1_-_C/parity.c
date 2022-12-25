#include <cs50.h>
#include <stdio.h>

// Remember -  make calculator.c does not work use clang instead 'clang hello.c -o hello -lcs50' 

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}