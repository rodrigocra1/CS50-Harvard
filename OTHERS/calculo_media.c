#include <cs50.h>
#include <stdio.h>

// Prototype
float media(int length, int array[]);


int main(void)
{
    int N;
    do
    {
        N = get_int("Quantidade de notas: ");
    }
    while (N <= 0);

    // Input notas
    int notas[N];
    for (int i = 0; i < N; i++)
    {
        notas[i] = get_int("Notas: ");
    }

    // Imprimir média
    printf("Média: %.1f\n", media(N, notas));
}

float media(int length, int array[])
{
    // Calcular media
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    printf("\n");
    return sum / (float) length;
}
