#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tossCoin(void);

int main(){
    srand( time( NULL ) );
    int heads = 0, tails = 0, i;
    for (i = 0; i < 100; i++){
        if(tossCoin()){
            heads += 1;
        }else{
            tails += 1;
        }
    }
    printf("Heads = %d, Tails = %d", heads, tails);

}

int tossCoin(void){
    return  rand() % 2; 
}