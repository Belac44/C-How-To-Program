#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    char *tknPtr1, *tknPtr2;
    int ret;

    printf("Enter two comparable strings: ");
    gets(s);

    tknPtr1 = strtok(s, ".");
    tknPtr2 = strtok(NULL, ".");

    ret = strncmp(tknPtr1, tknPtr2, 6);

    // printf("Comparing the two string for %d characters\n\n",comp);

    if (ret == 0){
        printf("The two strings are equal");
    }
    else if (ret > 0){
        printf("%s is greater than %s", tknPtr1, tknPtr2);
    }
    else if (ret < 0){
        printf("%s is less than %s", tknPtr1, tknPtr2);
    }
}