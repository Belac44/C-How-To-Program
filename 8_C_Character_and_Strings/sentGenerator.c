#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define  SIZE 5

int main(){
    srand( time( NULL ) );

    char *article[ SIZE ] = {"the","a","one","some","any"};
    char *noun[ SIZE ] = {"car","town","dog","girl","boy"};
    char *verb[ SIZE ] = {"drove","jumped","ran","walked","skipped"};
    char *preposition[ SIZE ] = {"on","under","over","from","to"};


    int i,rand1,rand2,rand3,rand4,rand5,rand6;

    for (i = 0; i < 20; i++){
        char s[100] = "";
        char s2[8] = "";
        
        rand1 = rand() % SIZE;
        rand2 = rand() % SIZE;
        rand3 = rand() % SIZE;
        rand4 = rand() % SIZE;
        rand5 = rand() % SIZE;
        rand6 = rand() % SIZE;

        int n= toupper(article[rand1][0]);
        sprintf(s2,"%c%s",n,&article[rand1][1]);
        sprintf(s, "%s ",strcat(s,s2));
        sprintf(s, "%s ",strcat(s,noun[rand2]));
        sprintf(s, "%s ",strcat(s,verb[rand3]));
        sprintf(s, "%s ",strcat(s,preposition[rand4]));
        sprintf(s, "%s ",strcat(s,article[rand5]));
        printf("%s.",strcat(s,noun[rand6]));

    }
}