#include <stdio.h>
#define SIZE 10

int main(){
    int i, count[ SIZE ] = {0};

    for (i = 0; i < SIZE; i++){
        printf("Enter an integer: ");
        scanf("%d",&count[i]);
    }

    for (i = 0; i < SIZE; i++){
        printf("%d \n", count[i]);
    }
}