#include <stdio.h>

void printToScreen(const char *);
int main(){
    char string[] = "print characters of a string";

    printf("The string is:\n");
    printToScreen(string);
    printf("\n");

    return(0);
}

void printToScreen(const char *sPtr) {
    for (; *sPtr != '\0'; sPtr++ ){
        printf("%c",*sPtr);
    }
    printf("\n");
}