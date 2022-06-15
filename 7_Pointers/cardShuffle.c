#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void deal(const int wDeck[][13], const char *wFace[],const char *wSuit[]);
void shuffle(int wDeck[][ 13 ]);


int main(){
    const char *suit[ 4 ] = { "Hearts","Diamonds","Clubs","Spades" };

    const char *face[ 13 ] = {
        "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"
    };

    int deck[ 4 ][ 13 ] = {0};

    srand( time( 0 ) ); /*seed random-number generator */

    shuffle( deck );
    deal( deck, face, suit);
}

void shuffle(int wDeck[][ 13 ]){
    int row, column, card;
    for (card = 1; card <= 52; card ++){
        do {
            row = rand() % 4;
            column = rand() % 13;
        }while( wDeck[ row ][ column ] != 0);

        wDeck[ row ][ column ] = card;
    }

}

void deal(const int wDeck[][13], const char *wFace[],const char *wSuit[])
{
    int card, row, column;

    for (card = 1; card <= 52; card ++){
        for (row = 0; row<= 3; row++){
            for (column = 0; column <= 12; column++){
                if (wDeck[ row ][ column ] == card){
                    printf("%5s of %-8s%c",wFace[ column ], wSuit[ row ], card % 2 == 0 ? '\n': '\t');
                }
            }
        }
    }
}