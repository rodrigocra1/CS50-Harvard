#include <cs50.h>
#include <stdio.h>

int size;

int main(void)
{
    // Input array size
    size = get_int("Array size: ");

    if (size > 31)
    {
        do
        {
            size = get_int("Please enter a number less than 31: ");
        }
        while (size > 31);
    }
    // Declarar array
    int numbers[size];
    numbers[0] = 1;

    // popular array
    for (int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }

    // ou int numbers[5] = {1, 2 ,4, 8, 16};

    // Imprimir os valores um por um
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", numbers[i]);
    }
}
