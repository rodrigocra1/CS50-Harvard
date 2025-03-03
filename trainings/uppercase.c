#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Antes: ");
    printf("Depois: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Mudar s[i] para uppercase
            printf("%c", s[i] - ('a' - 'A'));

        }
        else
        {
            // Apenas imprimir s[i]
            printf("%c", s[i]);
        }

    }
    printf("\n");
}
