#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        string name = get_string("What's your name? ");
        printf("Hello, ");
        printf("%s \n", name);
    }
    else
    {
        printf("Hello, ");
        for (int i = 1; i < argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("!\n");
    }
    return 0;
}
