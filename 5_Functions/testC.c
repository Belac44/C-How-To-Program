#include <stdio.h>
#include <math.h>

int cube(int y);

int main(){
    int num, prog_result, math_result;
    printf("Enter an Interger: ");
    scanf("%d",&num);

    math_result = pow(num, 3);
    prog_result = cube(num);

    printf("Result from: \nOwn Defined function = %d\nMath library function(pow) = %d ",prog_result, math_result);

    return 0;
}

int cube(int y){
    return y * y* y;
}