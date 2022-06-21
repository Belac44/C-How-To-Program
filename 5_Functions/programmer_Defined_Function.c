#include <stdio.h>

int square(int num);

int main(){
    int x;

    for (x = 0; x <= 10; x++){
        printf("%d ",square(x));
    }

    return 0;
}

int square(int num){
    return num * num;
}