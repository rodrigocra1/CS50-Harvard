#include <cs50.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Seguranca do input
    if(argc != 2)
    {
        printf("Usage: ./pdf filename\n");
        return 1;
    }

    // Abrir arquivo
    FILE *input = fopen(argv[1], "r");

    // Criar buffer de 4 bytes para o arquivo
    uint8_t buffer[4];

    // Criar um array da assinatura de bytes padrao dos pdfs:
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Ler os 4 primeiros bytes do arquivo
    fread(buffer, sizeof(uint8_t), 4, input);

    // checar se os 4 bytes sao iguais aos da assinatura de bytes dos pdfs
    for (int i = 0; i < 4; i++)
    {
        if (signature[i] != buffer[i])
        {
            printf("File is not pdf!\n");
            return 0;
        }

    }

    printf("File is a pdf!");
    
    // Fechar o arquivo
    fclose(input);
    return 0;

}
