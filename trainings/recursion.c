#include <cs50.h>
#include <stdio.h>

int fact(int n);

int main(void)
{
    int n = 1;
    fact(n);

    printf("%i", n);
}


int fact(int n)
{
        if (n == 1)
        return 0;
        if ((n % 2) == 0)
        return 1 + collatz (n / 2);
        else
        return 1 + collatz (3*n + 1);
}
