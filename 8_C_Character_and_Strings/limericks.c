#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

int random( int size );
int main(){
    char *adjectives[] = {"young","old","wonderful","tall","hateful"};
    char *article[] = {"the","a","one","some","any"};
    char *noun[] = {"man","girl","bird","person","lady"};




    
    char *verb[] = {"drove","jumped","ran","walked","skipped"};
    char *prepositions[] = {"to","from","over","under","on"};
    int i;

    srand( time( NULL ) );
    for (i = 0; i < 5; i++){

        char s[100] = "";
        char s2[10] = "";
        int rand1 = random( SIZE );

        sprintf(s2, "%c%s",toupper(article[rand1][0]),&article[rand1][1]);
        sprintf(s,"%s ",strcat(s,s2));
        sprintf(s,"%s ",strcat(s,noun[random( SIZE )]));
        sprintf(s,"%s ",strcat(s,verb[random( SIZE )]));
        sprintf(s,"%s ",strcat(s,prepositions[random( SIZE )]));
        sprintf(s,"%s ",strcat(s,article[random( SIZE )]));
        sprintf(s,"%s.",strcat(s,noun[random( SIZE )]));
        printf("%s\n",s);
    }
}

int random( int size ){
    return rand() % size;
}