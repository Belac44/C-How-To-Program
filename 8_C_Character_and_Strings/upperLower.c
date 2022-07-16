#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[100];
    int i;

    printf("Enter a character:=> ");
    gets(s);
    puts("\nUpper Case:");
    for (i = 0;s[i] != '\0'; i++){
        printf("%c",toupper(s[i]));
    }
    puts("\n\nLower Case:");
    for (i = 0;s[i] != '\0'; i++){
        printf("%c",tolower(s[i]));
    }
    
    // printf("Lower case: %s",tolower(s));

}