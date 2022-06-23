#include <stdio.h>

int main(){
    int int_part, int_remainder, num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1, &num2);
    int_part = num1 / num2;
    int_remainder = num1 % num2;

    printf("Interger part = %d and remainder part = %d", int_part, int_remainder);
}