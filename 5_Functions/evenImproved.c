#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(void);
int reply(void);

int main(){
    srand( time( NULL )); 
    int response,result, i = random(),j = random(), send = reply(), trials = 0, score= 0;
    result = i * j;

    while (trials < 10){
    printf("Whats is %d times % d:  ", i, j, send);
    scanf("%d", &response);

    while (response != result && trials < 10){
        send = reply();
        trials += 1;
        switch ( send ){
        case 1:
            printf("No.Please try Again\n");
            break;
        case 2:
            printf("Wrong.Try once more\n");
            break;
        case 3:
            printf("Wrong!! Don't give up!\n");
            break;
        default:
            printf("No. Keep trying\n");
            break;

    }
        printf(">>");
        scanf("%d",&response);
    }

    if (response == result && trials < 10){
        trials += 1;
        score += 10;
       
        switch ( send ){
        case 1:
            printf("Very Good\n");
            break;
        case 2:
            printf("Excellent\n");
            break;
        case 3:
            printf("Nice Work!!\n");
            break;
        default:
            printf("Keep up the god work!!\n");
            break;

        }
        i = random();
        j = random();
        result = i * j;
    }

    if (trials == 10){
        if (score < 80){
            printf("\n\nPlease ask your in structor for extra help! You score is %d", score);
        }else{
            printf("\n\nToday's Questions Elapsed. Your score = %d", score);
        }
        
    }
    }
    
}
int random(void){
    return 1 + rand() % 9;
}
int reply(void){
    return 1 + rand() % 4;
}
