#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char s[100] = "", s2[100];
    char *tknPtr1, *tknPtr2, *tknPtr3, *tknPtr4;
    printf("Phone Number: ");
    gets(s);

    
    tknPtr4 = strtok(s, "-");
    tknPtr4 = strtok(NULL,"");
    tknPtr1 = strtok(s," ");
    tknPtr2 = strtok(tknPtr1,")");
    tknPtr3 = strtok(tknPtr2, "(");
    
    
    sprintf(s2, "Area code: %d, phone number: %ld",atoi(tknPtr3), atol(tknPtr4));
    printf("%s",s2);

}