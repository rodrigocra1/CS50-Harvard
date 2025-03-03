#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(string text, int key);

int main(int argc, string argv[1])
{
    // Ter certeza de que o programa vai rodar com apenas uma linha de argumentos
    if (argc != 2)
    {
        printf("You need to put an integer number for key encryption\n");
        return 1;
    }

    // Ter certeza de que cada caractere em argv é um digito.
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Only digits allowed\n");
            return 1;
        }
    }
    // Converter argv de string para int.
    int key = atoi(argv[1]);

    // Pedir input de texto do usuario.
    string text = get_string("\nInsert text:\n");

    // Rodar função
    encrypt(text, key);

    // Imprimir texto criptografado

    return 0;
}

void encrypt(string text, int key)
{
    printf("\nciphertext: ");

    int text_l = strlen(text);
    for (int i = 0; i < text_l ; i++)
    {
        char letter = text[i];

        if (isalpha(letter))
        {
            char offset = isupper(letter) ? 'A' : 'a';
            letter = (letter - offset + key) % 26 + offset;
        }
        printf("%c", letter);
    }
    printf("\n");
}

