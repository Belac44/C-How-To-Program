#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WON, LOST};

int rollDice(void);

int main(){
    int sum, myPoint;

    enum Status gameStatus;

    srand( time( NULL ) );

    sum = rollDice();

    switch (sum){
        case 7:
        case 11:
            gameStatus=WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus=LOST;
            break;
        default:
            gameStatus=CONTINUE;
            myPoint = sum;
            printf("Points = %d\n", myPoint);
            break;

    }

    while ( gameStatus == CONTINUE){
        sum = rollDice();

        if (sum == myPoint){
            gameStatus = WON;
        }else{
            if (sum == 7){
                gameStatus = LOST;
            }
        }

       
    }
     if (gameStatus == WON ){
            printf("Player wins\n");
        }
        else {
            printf("Player Lost\n");
        }

}

int rollDice(void){
    int die1, die2, workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);

    workSum = die1 + die2;

    printf("Player rolled %d and %d summing to %d\n",die1,die2,workSum);

    return workSum;
}