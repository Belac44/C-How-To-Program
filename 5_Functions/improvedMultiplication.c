#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(void);
int reply(void);

int main(){
    srand( time( NULL )); 
    int response,result, i = random(), j = random(), send = reply();
    result = i * j;

    printf("Whats is %d times % d:  ", i, j, send);
    scanf("%d", &response);

    while (response != result){
        send = reply();
        switch ( send ){
        case 1:
            printf("No.Please try Again\n");
            break;
        case 2:
            printf("Wrong.Try once more\n");
            break;
        case 3:
            printf("Wron77g!! Don't give up!\n");
            break;
        default:
            printf("No. Keep trying\n");
            break;

    }
        printf(">>");
        scanf("%d",&response);
    }

    switch ( send ){
        case 1:
            printf("Very Good");
            break;
        case 2:
            printf("Excellent");
            break;
        case 3:
            printf("Nice Work!!");
            break;
        default:
            printf("Keep up the god work!!");
            break;

    }
    
}
int random(void){
    return 1 + rand() % 9;
}
int reply(void){
    return 1 + rand() % 4;
}
