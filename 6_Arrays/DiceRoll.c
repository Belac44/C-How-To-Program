#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main( void ){
    int i;
    int frequency[ SIZE ] = {0};

    srand(time(NULL));

    for (i = 0; i < 6000; i++){
        ++frequency[ 1 + rand() % 6];
    }

    printf("%s%10s\n","Face","Frequency");

    for (i = 1; i < SIZE; i++) {
        printf("%d%12d\n", i, frequency[i]);
    }
}