#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2) // checa se possui o argumento correto, caso contrario retorna o print
    {
        printf("Usage: ./recover card_image_filename\n");
        return 1;
    }
    FILE *card = fopen(argv[1], "r");

    if (card == NULL) // caso não seja possível abrir a imagem do cartão
    {
        printf("Could not open %s.\n", argv[1]);
        return 2;
    }

    uint8_t buffer[512];

    int file_count = 0;
    FILE *img = NULL;

    while (fread(buffer, 1, 512, card) == 512)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff &&
            (buffer[3] >= 0xe0 && buffer[3] <= 0xef))
        {
            // fechar a imagem já aberta antes de abrir a proxima
            if (img != NULL)
            {
                fclose(img);
            }

            // Criar um novo arquivo jpg
            char filename[8];
            sprintf(filename, "%03d.jpg", file_count);
            img = fopen(filename, "w");
            file_count++;
        }
        // Se abrir uma nova jpg, escrever.
        if (img != NULL)
        {
            fwrite(buffer, sizeof(uint8_t), 512, img);
        }
    }
    // Fechar todos os arquivos abertos.
    if (img != NULL)
    {
        fclose(img);
    }
    fclose(card);
    return 0;
}
