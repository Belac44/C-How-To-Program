#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100] = "";
    char s2[15], s3[100] = "";
    char *tknPtr;

    printf("Input a sentence: ");
    gets(s);
    
    tknPtr = strtok(s, " ");
    while(tknPtr != NULL ){
        sprintf(s2,"%s%cay ",&tknPtr[1],tolower(tknPtr[0]));
        strcat(s3,s2);
        tknPtr = strtok(NULL, " ");
    }
    printf("%s",s3);

}