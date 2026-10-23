#include <cs50.h>
#include <stdio.h>

// Point values A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q,  R, S, T, U, V, W, X, Y, Z 
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


int main(void)

{
    // prumpting players for input
    string word 1 = get_srting ("player 1: ");
    string word 2 = get_srting ("player 2: ");

    // players input {word}
    int score1 = get_int ("word 1: ");
    int score2 = get_int ("word 2: ");

    //  creating  score
    if (score1 > score2)
    {
        printf("Player 1 win!\n");
    }
    else 
    {
        printf("player 2 win!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}



