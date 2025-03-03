#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string text = argv[1];
    // Input usuario
    if (argc != 2)
    {
        printf("Please provide a word.\n");
        return 1;
    }
    else if (!isalpha(text[0]))
    {
        printf("Please don't use numbers\n");
        return 2;
    }

    // Interacao entre cada elemento na string
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }
    }
    // Print sim
    printf("Yes\n");
}
