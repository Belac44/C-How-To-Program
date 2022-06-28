#include <stdio.h>

int main(){
    int sales[3][5] = {0};
    int row, column;

    for (row = 0; row <= 2; row++){
        for (column = 0; column <= 4; column++){
            printf("%d  ", sales[row][column]);
        }
    }
    
}