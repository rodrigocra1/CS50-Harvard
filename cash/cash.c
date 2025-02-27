#include <cs50.h>
#include <stdio.h>

//Definindo funções das moedas
int calcular_vinteecinco(int cents);
int calcular_dez(int cents);
int calcular_cinco(int cents);
int calcular_um(int cents);

int main(void)
{
    //Defindo variáveis
    int cents;
    int dez;
    int cinco;
    int um;
    int vinteecinco;

    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    vinteecinco = calcular_vinteecinco(cents);
    cents = cents - (vinteecinco * 25);

    dez = calcular_dez(cents);
    cents = cents - (dez * 10);

    cinco = calcular_cinco(cents);
    cents = cents - (cinco * 5);

    um = calcular_um(cents);
    cents = cents - (um * 1);

    //Imprimindo o resultado da soma dos moedas
    int troco = (vinteecinco + dez + cinco + um);
    printf("Coins: %d\n", troco);
}

int calcular_vinteecinco(int cents)
{
    //Inicializa a variavel vinteecinco, enquanto cents for maior ou igual a 25, soma uma moeda e diminui 25 do valor total de cents.
    int vinteecinco = 0;
    while (cents >= 25)
    {
        vinteecinco++;
        cents = cents - 25;
    }
    return vinteecinco;
}

int calcular_dez(int cents)
{
    int dez = 0;
    while (cents >= 10)
    {
        dez++;
        cents = cents - 10;
    }
    return dez;
}

int calcular_cinco(int cents)
{
    int cinco = 0;
    while (cents >= 5)
    {
        cinco++;
        cents = cents - 5;
    }
    return cinco;
}
int calcular_um(int cents)
{
    int um = 0;
    while (cents >= 1)
    {
        um++;
        cents = cents - 1;
    }
    return um;
}
