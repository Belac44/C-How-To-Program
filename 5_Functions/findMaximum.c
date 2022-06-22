#include <stdio.h>

int maximum(int num1, int num2, int num3);

int main(){
    int num1, num2, num3, max;
    
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    max = maximum(num1,num2,num3);

    printf("You have Input %d, %d, %d and the largest of them is %d", num1,num2,num3,max);
}

int maximum(int num1, int num2, int num3){
    int max;

    max = num1;
    if (num2 > max)
        max=num2;
    if (num3 > max)
        max = num3;
    return max;
}