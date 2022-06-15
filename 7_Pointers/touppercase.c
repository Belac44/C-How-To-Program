#include <stdio.h>
#include <ctype.h>

void convertToUpper(char *);
int main() {
    char string[] = "characters and $32.98";

    printf("Original string: %s\n",string);

    convertToUpper( string );

    printf("String after modification: %s\n",string);

    return(0);
}

void convertToUpper( char *Ptrs ) {
    while (*Ptrs != '\0'){
        if (islower(*Ptrs)){
            *Ptrs = toupper(*Ptrs);
        }
        Ptrs++;
    }
}