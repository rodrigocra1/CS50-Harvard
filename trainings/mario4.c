#include <cs50.h>
#include <stdio.h>

#define BLK  "\x1b[30m"
#define COLOR_YELLOW  "\x1b[33m"
#define COLOR_RESET   "\x1b[0m"

void print_row(int blocos);
void empty_space(int space);

int main(void)

{
    int altura;
    do
    {
        altura = get_int("Qual será a altura da pirâmide? ");
    }
    while (altura < 1);

    for (int i = 0; i <= altura; i++)
    {
        empty_space(altura - i);
        print_row(i);
    }
}

// Imprimir coluna
void print_row(int blocos)
{
    for (int i = 0; i < blocos; i++)
    {
        printf(COLOR_YELLOW "# # " COLOR_RESET);
    }
    printf("\n");
}

void empty_space(int space)
{
    for (int i = 0; i < space; i++)
    {
        printf(BLK "  " COLOR_RESET);
    }
}
