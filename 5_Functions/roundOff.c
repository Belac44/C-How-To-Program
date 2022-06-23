#include <stdio.h>
#include <math.h>

float roundToInterger( float number );
float roundToTenths( float number);
float roundToHundreths( float number);
float roundToThousandths( float number );

int main(){
    float num;
    int y_10s, y_100s;
    for (num = 23.5; num <= 25.0; num +=0.05){

    printf("Number = %f Rounded off to Integer = %f\n",num,roundToInterger(num));
    printf("Number = %f Rounded off to Tenths = %f\n",num,roundToTenths(num));
    printf("Number = %f Rounded off to Hundreths = %f\n",num,roundToHundreths(num));
    printf("Number = %f Rounded off to Thousandths = %f\n",num,roundToThousandths(num));
    printf("\n\n\n");

    }
    
}

float roundToInterger( float number ){
    return floor( number + .5);
}

float roundToTenths( float number){
    return floor( number * 10 + .5 ) / 10;
}

float roundToHundreths( float number){
    return floor( number * 100 + .5)/100;
}

float roundToThousandths( float number ){
    return floor( number * 1000 + .5) / 1000;
}