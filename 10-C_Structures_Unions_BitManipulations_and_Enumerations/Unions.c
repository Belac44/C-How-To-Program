#include <stdio.h>
 union number{
    int x;
    double y;
 };
int main(){
    union number value;
    value.x = 100;

    printf("Put a value in the interger member and print both members.\nint:%d\ndouble:%f\n",value.x,value.y);

    value.y = 100.0;

    printf("Put a value in the interger member and print both members.\nint:%d\ndouble:%f\n",value.x,value.y);
    return 0;
}