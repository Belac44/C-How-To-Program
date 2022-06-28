#include <stdio.h>
#define SIZE 20

int main(){
    int i, j, search;
    int count [SIZE] = {0};

    for (i = 0; i < 20; i++){
        printf("\nNumber:>>");
        scanf("%d", &count[i]);
        for (j = 0; j<= i; j++){
            for (search = 0; search <= i; search ++){
                if (count[i] == count[search] || count[i] < 10 || count[i] > 1000){
                    printf("%d is a duplicate or out of range\n", count[i]);
                    count[i] = 0;
                    i -=1;
                }      

            }
            printf("%d  ", count[j]);
            
    }
}
}