#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void shuffle( int deck[][13]);
void deal(int deck[][13],const char *suit[],const char *face[]);

int main( void ){
    const char *suit[4] = {"Hearts","Spades","Clubs","Diamonds"};
    const char *face[13] = {"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","King","Queen"};
    int deck[4][13] = { 0 };

    srand( time( NULL ) );
    shuffle(deck);
    deal(deck,suit,face);
}

void shuffle( int deck[][13]){
    int i,row,column;
    for (i = 1; i <= 52; i++){
        do{
            row = rand() % 4;
            column = rand() % 13;
        }while(deck[row][column] != 0);

        deck[row][column] = i;
        
    }
}

void deal(int deck[][13],const char *suit[],const char *face[]){
    int i,j,card;
    for (card = 1; card <= 52; card++){
        for (i = 0; i < 4; i++){
            for (j = 0; j < 13; j++){
                if (deck[i][j] == card){
                    printf("%s of %s\n",face[j],suit[i]);
                }
            }
        }

    }
}