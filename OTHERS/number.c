#include <cs50.h>
#include <stdio.h>

void plus10(int x);
void equal10(int x);

int main(void)

{
    int y;
    y = 10;
    int x = get_int("Escreva um número menor que 10: ");

if (x < y)
{
    printf("Parabéns você é muito inteligente!\n");
}

else if (x > y)
{
    plus10(x);
}

else
{
    equal10(x);
}
}

void plus10(int number)
{
    while (number > 10)
    {
     int x = get_int("Escreva um número menor que 10: ");
     printf("No no no, %i é maior que 10!\n", number);
    }
}

void equal10(int number)
{
    while (number == 10)
    {
     printf("No no no, eu disse MENOR que 10!\n");

    }
}
