#include <stdio.h>

int gcd(int num1, int num2);

int main(){
    int num1, num2;
    printf("Enter two digits:");
    scanf("%d%d", &num1,&num2);

    printf("%d is the gcd", gcd(num1, num2));
}

int gcd(int num1, int num2){
    int i, largest, gcd = 1;
    largest = num1;
    if (num2 > largest){
        largest = num2;
    }
    
    for (i = 1; i < largest; i++){
            if (num1 % i == 0 && num2 % i == 0){
                gcd *= i;
                num1 = num1 / i;
                num2 = num2 / i;
                if (num1 % i == 0 && num2 % i == 0){ 
                    gcd *= i;
                    num1 = num1 / i;
                    num2 = num2 / i;
                }
            }  
            
    
    }
    return gcd;
    
}