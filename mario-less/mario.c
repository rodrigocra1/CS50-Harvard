#include <cs50.h>
#include <stdio.h>

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

    for (int i = 1; i <= altura; i++)
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
        printf("#");
    }
    printf("\n");
}

void empty_space(int space)
{
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
}
