#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(string text, string key);

int main(int argc, string argv[1])
{
    // Ter certeza de que o programa vai rodar com apenas uma linha de argumentos
    if (argc != 2)
    {
        printf("You need to put a cypher key for encryption\nUsage: ./substitution KEY\n");
        return 1;
    }

    // Ter certeza de possuir apenas caracteres no argv
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Only letters allowed in the cypher key\n");
            return 1;
        }
    }
    // Ter certeza de que cypher key preenche as 26 letras.
    for (int i = 0; argv[1][i] != '\0'; i++)
    {
        if (strlen(argv[1]) != 26)
        {
            printf("You need an 26 letters cypher key\n");
            return 1;
        }
    }

    // Ter certeza de que cypher key nao possui caracteres repetidos.
    int letter_count[26] = {0};
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        int index = toupper(argv[1][i]) - 'A';
        letter_count[index]++;
        if (letter_count[index] > 1)
        {
            printf("No equal letter allowed in cypher key\n");
            return 1;
        }
    }
    // Converter argv de string para cypher key.
    string key = argv[1];

    // Pedir input de texto do usuario.
    string text = get_string("\nInsert text:\n");

    // Rodar função
    encrypt(text, key);

    // Imprimir texto criptografado

    return 0;
}

void encrypt(string text, string key)
{
    printf("\nciphertext: ");

    int text_l = strlen(text);
    for (int i = 0; i < text_l; i++)
    {
        char letter = text[i];

        if (isalpha(letter))
        {
            char offset = isupper(letter) ? 'A' : 'a';
            int key_index = toupper(letter) - 'A';
            letter = isupper(letter) ? toupper(key[key_index]) : tolower(key[key_index]);
        }
        printf("%c", letter);
    }
    printf("\n");
}
