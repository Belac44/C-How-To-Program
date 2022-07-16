#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100];
    char *tokenPtr;
    float sum = 0;

    printf("Input a string rep ints: ");
    gets(s);

    tokenPtr = strtok(s," ");

    while (tokenPtr != NULL){
        sum += atof(tokenPtr);
        tokenPtr = strtok(NULL, " ");
    }

    printf("Sum: %f",sum);

}