#include <stdio.h>

float smallest(float a, float b, float c);
int main(){
    float num1, num2, num3;

    printf("Enter three floats: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    printf("The smallest of them all is %f", smallest(num1, num2, num3));

}

float smallest(float a, float b, float c){
    float lowest = a;

    if (b < lowest){
        lowest = b;
    }
    if (c < lowest){
        lowest = c;
    }

    return lowest;
}