#include <stdio.h>
#include <time.h>
#include <stdlib.h>


struct card {
    const char *face;
    const char *suit;
};

typedef struct card Card;

void fillDeck(Card * const wDeck,char *wFace[],char *wSuit[]);
void shuffle( Card * const wDeck );
void deal(const Card * const wDeck );

int main(){
        Card deck[ 52 ];

        char *faces[] = {"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};

        char *suits[] = {"Hearts","Diamonds","Clubs","Spades"};

        srand( time(NULL) );

        fillDeck( deck, faces, suits);
        shuffle( deck );
        deal( deck );

    return 0;
}

void fillDeck(Card * const wDeck,char *wFace[], char *wSuit[])
{
    int i;

    for (i = 0; i <= 51;i++){
        wDeck[ i ].face = wFace[ i % 13 ];
        wDeck[ i ].suit = wSuit[ i / 13 ];
    }
}

void shuffle( Card * const wDeck ){
    int i;
    int j;
    Card temp; /*Temporary struct for swapping Cards */

    for (i = 0; i < 52; i++){
        j = rand() % 52;
        temp = wDeck[ i ];
        wDeck[ i ] = wDeck[ j ];
        wDeck[ j ] = temp;
    }
}

void deal(const Card * const wDeck ){
    int i;

    for (i = 0; i <= 51; i++){
        printf("%5s of %-8s%c",wDeck[ i ].face,wDeck[ i ].suit,(i + 1)%2 ? '\t':'\n');
    }
}