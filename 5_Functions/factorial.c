#include <stdio.h>

long factorial(int num);

int main(){
    int i;
    for (i = 0; i <= 25; i++){
        printf("%d! = %ld\n", i, factorial(i));
    }

}

long factorial(int num){
    if (num <= 1){
        return 1;
    }else{
        return num * factorial(num-1);
    }
}
