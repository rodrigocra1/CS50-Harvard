#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Solocitar texto ao usuário.
    string text = get_string("Text: ");

    // Contar o numero de letras, palavras e frases no texto
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    double L = ((double) letters * 100) / (double) words;
    double S = ((double) sentences * 100) / (double) words;

    // printf("%i\n", letters);
    // printf("%i\n", words);
    // printf("%i\n", sentences);
    // printf("%lf\n", L);
    // printf("%lf\n", S);

    // Calcule o índice Coleman-liau
    double index = 0.0588 * L - 0.296 * S - 15.8;
    // printf("%lf\n", index);

    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    if (index > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }

    // Imprima o nivel da leitura
}
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}
