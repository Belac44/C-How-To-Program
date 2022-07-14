#include <stdio.h>
#include <ctype.h>


int main ( void ){
    char name[] = "jaymo";

    printf("%c%s",toupper(name[0]),&name[1]);
}