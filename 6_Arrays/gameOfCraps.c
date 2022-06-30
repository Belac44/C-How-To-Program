#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 22
int rollDice(void);
enum Status{ CONTINUE, WON, LOST };


int main(){
    int i, sum = 0, sum2 = 0, losses = 0, sumLoss = 0;
    int wins[ SIZE ] = {0};
    int loss[ SIZE ] = {0};
    srand( time( NULL ) );

    for (i = 0; i < 10; i++){
        enum Status gameStatus;
        


        int rolledSum, myPoint,j = 2;

        rolledSum = rollDice();

        switch (rolledSum){
            case 7:
            case 11:
                gameStatus = WON;
                ++wins[1];
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                ++loss[1];
                break;
            default:
                gameStatus = CONTINUE;
                myPoint = rolledSum;
                printf("Point is %d\n", myPoint);
                break;
        }

        while (gameStatus == CONTINUE && j < SIZE){
            rolledSum = rollDice();

            if (rolledSum == myPoint){
                gameStatus = WON;
                ++wins[j];
            } 
            else {
                if (rolledSum == 7) {
                    gameStatus = LOST;
                    ++loss[j];
                }
            }
            if (j == 21){
                j = 21;
            }
            if (j != 21){
                j++;
            }
        }

        if (gameStatus == WON){
            printf("Player wins\n");
            sum2 += 1;
        }
        else{
            printf("Player loses\n");
            losses += 1;
        }
    }

    printf("%s%15s%26s\n","Roll no","Count Wins", "Count Losses");
    for (i = 1; i < SIZE; i++){
        printf("%2d %12d %24d\n",i, wins[i], loss[i]);
        sum += wins[i];
        sumLoss += loss[i];
    }

    printf("Sum1  wins = %d\n", sum);
    printf("Sum2  wins = %d\n\n\n", sum2);

    printf("Sum1  losses = %d\n", sumLoss);
    printf("Sum of losses = %d\n\n", losses);


    return 0;
}

int rollDice(void){
    int num1, num2, result;
    num1 = 1 + rand() % 6;
    num2 = 1 + rand() % 6;

    result = num1 + num2;
    printf("Player rolled %d and %d summing to %d\n", num1, num2, result);

    return result;
}
