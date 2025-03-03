#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

void encrypt(void);
void decrypt(void);

int main(void)
{
    int opcao = get_int("\nDigite 1 para criptografar e 2 para descriptografar: ");

    switch (opcao)
    {
        case 1:
            printf("\n");
            encrypt();
            printf("\n\n");
            break;

        case 2:
            printf("\n");
            decrypt();
            printf("\n\n");
            break;
    }
}

// Funcao de criptografar
void encrypt(void)
{
    string text_to_encrypt = get_string("Digite o texto que será criptografado: ");

    printf("\n Seu texto criptografado é: ");

    for (int i = 0; i < strlen(text_to_encrypt); i++)
    {
        printf("%s%c%s", RED, text_to_encrypt[i] + 9, RESET);
    }
}

// Funcao de descriptografar
void decrypt(void)
{
    string text_to_decrypt = get_string("Digite o texto que será descriptografado: ");

    printf("\n Seu texto descriptografado é: ");

    for (int i = 0; i < strlen(text_to_decrypt); i++)
    {
        printf("%s%c%s", GREEN, text_to_decrypt[i] - 9, RESET);
    }
}
