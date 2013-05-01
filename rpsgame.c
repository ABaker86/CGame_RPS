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
   //initialize all variables needed to be tracked during play
   int pHand = 0;
   int comHand;
   int numWin = 0;
   int numTie = 0;
   int numLose = 0;
   int numHandc = 0;
      
    while (pHand < 4) //The Game Loop                                    
    {
        printf("1:Rock\n2:Paper\n3:Scissors\n4:Exit\n"); //shows hand selections
        scanf("%d", &pHand);
        system("cls");
            switch(pHand)  //prints a statemtn to the console regarding the hand (#) chosen
            {
                case 1: printf("You Chose Rock\n");break;
                case 2: printf("You Chose Paper\n");break;
                case 3: printf("You Chose Scissors\n");break;
            }
            comHand = (rand()% 3 + 1); //Randomly selects a number from 1-3 (33.33% chance of difference)

            switch(comHand)   //identifies which hand (#) the computer has chosen 
            {
               case 1: printf("Com Chose Rock\n");break;
                case 2: printf("Com Chose Paper\n");break;
                case 3: printf("Com Chose Scissors\n");break;
            }
            if (((pHand == 1) && (comHand == 3)) || ((pHand == 2) && (comHand == 1)) ||
((pHand == 3) && (comHand == 2)))   //The if statement determines whether or not one hand beats the other
                {
                    printf("\n****You Win!*****\n");
                    numWin++; //increment the number of time player wins
                }
                else if (pHand == comHand)
                {
                    printf("\nIt's a Draw!\n");
                    numTie++; //increment the number of time player draws/ties
                }
                else
                {
                    printf("\nYou Lose!\n");
                    numLose++;   //increment the number of time player Loses
                }
                numHandc++;   //increment the number of time player has played/selected a hand
                printf(" \nWins: %d Ties: %d Losses: %d Plays: %d \n", numWin, numTie, numLose, numHandc);
}

   return 0;
}
