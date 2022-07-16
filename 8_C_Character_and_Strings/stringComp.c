#include <stdio.h>
#include <string.h>


int main(){
    char s[100];
    int comp;
    char *tokenPtr1, *tokenPtr2;

    printf("Input two strings: ");
    gets(s);

    tokenPtr1 = strtok(s," ");
    tokenPtr2 = strtok(NULL," ");

    comp = strcmp(tokenPtr1, tokenPtr2);

    if (comp == 0){
        puts("The strings are equal");
    }
    else if(comp < 0){
        printf("%s is less than %s",tokenPtr1,tokenPtr2);
    }
    else if (comp > 0){
        printf("%s is greater than % s", tokenPtr1, tokenPtr2);
    }

}