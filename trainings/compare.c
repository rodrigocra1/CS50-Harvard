#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("Qual o X? "); /*Definir int X*/
    int y = get_int("Qual o Y? "); /*Definit int Y*/

    if (x < y)
    {
        printf("X é menor que Y\n"); /*Resposta em caso de X menor que Y*/
    }
    else if (x > y)
    {
        printf("X é maior que Y\n"); /*Resposta em caso de X maior que Y*/
    }
    else
    {
        printf("X é igual a Y!\n"); /*Resposta em caso de X igual a Y*/
    }
}
