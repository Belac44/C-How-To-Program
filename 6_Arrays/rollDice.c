#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FREQUENCY 13

int main(){
    srand( time( NULL ));
    int i, num1, num2;

    int count[ FREQUENCY ] = {0};

    for (i = 0; i < 3600; i++){
        num1 = 1 + rand() % 6;
        num2 = 1 + rand() & 6;
        ++count[num1 + num2];
    }

    printf("%s%12s\n","Sum", "Frequency");

    for (i = 1; i < FREQUENCY; i++){
        printf("%2d%15d\n",i, count[i]);
    }
}