#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main( void ){
    char s[100];
    char *tokenPtr;
    int sum = 0;

    printf("Enter four strings rep ints: ");
    gets(s);

    tokenPtr = strtok(s, " ");
    
    while ( tokenPtr != NULL) {
        sum += atoi(tokenPtr);
        tokenPtr = strtok(NULL," ");
    }
    printf("Sum:%d",sum);


}