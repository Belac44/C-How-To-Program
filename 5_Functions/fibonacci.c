#include <stdio.h>

long fibonacci(int num);

int main(){
    long result;
    long number;

    printf("Enter an Interger: ");
    scanf("%ld", &number);

    result = fibonacci(number);

    printf("Fibonacci of %d = %ld", number, result);
}

long fibonacci(int num){
    if (num == 1|| num == 0){
        return num;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}