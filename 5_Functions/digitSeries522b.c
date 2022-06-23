#include <stdio.h>

int main(){
    int num;

    printf("Input an int: ");
    scanf("%d", &num);

    if (num < 10){
        printf("%d", num%10);
    }
    else if (num < 100 ){
        printf("%d %d",num/10, num%10);
    }
    else if (num < 1000){
        printf("%d %d %d", num/100, (num/10)%10, (num%100)%10);
    }
    else if (num < 10000){
        printf("%d %d %d %d", num/1000,(num/100)%10, (num/10)%10,((num%1000)%100)%10 );
    }
    return 0;
}
