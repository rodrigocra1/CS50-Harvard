#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void get_word1();
void get_word2();
int score1 = 0;
int score2 = 0;

// Assign the values to the letters
int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    get_word1();
    get_word2();

    if (score1 == score2)
    {
        printf("\nTie!\n%d points each!\n", score1);
    }
    else
    {
        // Verify results
        printf("\nPlayer %d wins!\n", (score1 > score2) ? 1 : 2);
        printf("\nPlayer 1: %d points.\nPlayer 2: %d points.\n", score1, score2);
    }
}
// Get word for player 1
void get_word1()
{

    string word1 = get_string("Player 1: ");

    for (int i = 0; word1[i] != '\0'; i++)
    {
        char letter = toupper(word1[i]);
        if (letter >= 'A' && letter <= 'Z')
        {
            score1 += points[letter - 'A'];
        }
    }
}

// Get word for player 2
void get_word2()
{

    string word2 = get_string("Player 2: ");

    for (int i = 0; word2[i] != '\0'; i++)
    {
        char letter = toupper(word2[i]);
        if (letter >= 'A' && letter <= 'Z')
        {
            score2 += points[letter - 'A'];
        }
    }
}
