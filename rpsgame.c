/********************************
Title: Rock, Paper, Scissors Game
Technique: C
Author: Adam Baker
Date: 4/29/2013
*********************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int pHand = 0;
   int comHand;
   int numWin = 0;
   int numTie = 0;
   int numLose = 0;
   int numHandc = 0;

    while (pHand < 4)
    {
        printf("1:Rock\n2:Paper\n3:Scissors\n4:Exit\n");
        scanf("%d", &pHand);
        system("cls");
            switch(pHand)
            {
                case 1: printf("You Chose Rock\n");break;
                case 2: printf("You Chose Paper\n");break;
                case 3: printf("You Chose Scissors\n");break;
            }
            comHand = (rand()% 3 + 1);

            switch(comHand)
            {
               case 1: printf("Com Chose Rock\n");break;
                case 2: printf("Com Chose Paper\n");break;
                case 3: printf("Com Chose Scissors\n");break;
            }
            if (((pHand == 1) && (comHand == 3)) || ((pHand == 2) && (comHand == 1)) ||
((pHand == 3) && (comHand == 2)))
                {
                    printf("\n****You Win!*****\n");
                    numWin++;
                }
                else if (pHand == comHand)
                {
                    printf("\nIt's a Draw!\n");
                    numTie++;
                }
                else
                {
                    printf("\nYou Lose!\n");
                    numLose++;
                }
                numHandc++;
                printf(" \nWins: %d Ties: %d Losses: %d Plays: %d \n", numWin, numTie, numLose, numHandc);
}

   return 0;
}
