#include <stdio.h>
#define SIZE 10

void bubbleSort( int * const Ptra, const int size );

int main(){
    int a[SIZE] = {2,6,4,8,10,12,89,45,37};
    int i;

    printf("Unsorted Items\n");

    for(i = 0; i < SIZE; i++){
        printf("%4d",a[i]);
    }

    printf("\nItems Sorted\n");

    bubbleSort( a, SIZE );


     for(i = 0; i < SIZE; i++){
        printf("%4d",a[i]);
    }
}

void bubbleSort( int *Ptra, const int size ){
    void swap(int *element1, int *element2);
    int i, pass, hold;
    for (pass = 0; pass < size; pass++){
        for (i = 0; i < size - 1; i++ ){
            if (Ptra[i] < Ptra[i + 1]){
                swap(&Ptra[i], &Ptra[i + 1]);
            }

        }
    }
}

void swap(int *element1, int *element2){
    int hold = *element1;
    *element1 = *element2;
    *element2 = hold;
}