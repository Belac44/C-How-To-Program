#include <stdio.h>
#define SIZE 10
int main() {
    int i, pass, hold, n;
    n = 10;
    int a[SIZE] = {2,6,4,8,10,12,89,45,37};

    printf("Data Items in Original Order\n");

    for (i = 0; i< SIZE; i++){
        printf("%4d",a[i]);
    }

    printf("\nSorted Items\n");

    for (pass = 0; pass < SIZE; pass++){
        for (i = 0; i < SIZE -1; i++){
            if (a[i] > a[i+1]){
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }

    
    for (i = 0; i< SIZE; i++){
        printf("%4d",a[i]);
    }

    return(0);
}