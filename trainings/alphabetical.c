#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Input usuario
    string text = get_string("Input: ");

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
