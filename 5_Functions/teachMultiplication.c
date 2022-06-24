#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(void);

int main(){
    srand( time( NULL )); 
    int response,result, i = random(), j = random();
    result = i * j;

    printf("Whats is %d times % d: ", i, j);
    scanf("%d", &response);

    while (response != result){
        printf("No. Please try Again.\n");
        printf(">>");
        scanf("%d",&response);
    }
    printf("Very Good!");
    
}
int random(void){
    return 1 + rand() % 9;
}
