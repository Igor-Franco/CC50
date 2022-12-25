#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int score(char a[]);

int main(void)
{   
    char player1[30];
    printf("Player 1: ");
    fgets(player1, 30, stdin);
    fflush(stdin);
    char player2 [30];
    printf("Player 2: ");
    fgets(player2, 30, stdin);
    fflush(stdin);


    //printf()
    // Score both words
    int score1 = score(player1);
    int score2 = score(player2);
    printf("\nPlayer1 score: %d\nPlayer2 score: %d\n", score1, score2);
    if (score1 > score2)
    {
        printf("Winner Payer1!!\n");
    } 
    else if (score1 == score2)
    {
        printf("Draw!!\n");
    }
    else
    {
        printf("Winner Player2!!\n");
    }
    return 0;
}

int score(char a[]){
    int score = 0;
    for (int i = 0; i < 30; i++)
    {
        if (a[i] == 0)
        {
            return score;
        }
        else if(islower(a[i]))
        {
            score = score + POINTS[a[i]-97];
        }
        else if (isupper(a[i]))
        {
            score = score + POINTS[a[i]- 65];
        }
        
    }
    return score;
    
}
