#include <cs50.h>
#include <stdio.h>

int main(void)
{
    FILE *hi_file = fopen("hi.txt", "r");
    printf("%p", hi_file);
}
