#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Você concorda?\n Digite Y ou N: ");
    if (c == 'y' || c == 'Y')
    {
        printf("Você concordou!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Você discordou!\n");
    }
}
