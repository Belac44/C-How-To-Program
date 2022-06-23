#include <stdio.h>

int isPerfect(int num);

int main(){
    int i;
    for (i = 1; i < 1000; i++){
        if (isPerfect(i)){
            printf("%d is perfect\n", i);
        }
    }
}

int isPerfect(int num){
    int i, sum = 0;
    for (i = 1; i < num; i ++){
        if (num % i == 0){
            sum += i;
        }
    }
     if (sum == num){
        return 1;
     }else{
        return 0;
     }
}