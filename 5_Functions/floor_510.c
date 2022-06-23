#include <stdio.h>
#include <math.h>

int main(){
    float num;
    int y;

    // Rounding Off a number to the nearest interger and assigning the value to y
    for (num = 34.0; num < 36.5; num += 0.1){
         y = floor( num + .5);

        printf("Processed number = %.2f rounded to %d\n",num, y);
    }
    return 0;

}
       