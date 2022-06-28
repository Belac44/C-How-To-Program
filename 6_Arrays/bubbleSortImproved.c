#include <stdio.h>
#define SIZE 10

void sort( int numbers[]);
int main(void)
{
    
    int numbers[ SIZE ] = {2,7,4,3,1,10,9,6,8,5};
    sort( numbers);

    return 0;
}

void sort( int numbers[])
{
    
    int i, j, temp, last = numbers[SIZE - 1];;
    for (i = 0; i < SIZE - 1; i++){
        for (j = 0; j < SIZE - 1 - i; j++){
            if (numbers[j] > numbers[j + 1]){
                temp = numbers[j];
                numbers[j ] = numbers[ j + 1];
                numbers [j + 1] = temp;
            }
            
            
        }
        if (last == numbers[SIZE - 1]){
                printf("\nThe data may already be in proper format\n");
            }
             else{
                printf("\nAt least one more pass is needed\n");
            }
        
    }

    for (i = 0; i < SIZE; i++){
        printf("%d ", numbers[i]);
    }
}