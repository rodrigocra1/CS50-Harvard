#include <cs50.h>
#include <stdio.h>

void print_row(int blocos);
void empty_space(int space);
void print_r_row(int blocos);

int main(void)

{
    int altura;
    do
    {
        altura = get_int("Qual será a altura da pirâmide? ");
    }
    while (altura < 1 || altura > 27);

    for (int i = 1; i <= altura; i++)
    {
        empty_space(altura - i);
        print_row(i);
        empty_space(2);
        print_r_row(i);
    }
}

// Imprimir coluna

void print_row(int blocos)
{
    for (int i = 0; i < blocos; i++)
    {
        printf("#");
    }
}

void empty_space(int space)
{
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
}

void print_r_row(int blocos)
{
    for (int i = 0; i < blocos; i++)
    {
        printf("#");
    }
    printf("\n");
}
