#include <stdio.h>
#include <ctype.h>

int main( void )
{
    printf("According to isdigit:\n4 %s\n",isdigit('4')? "is a digit" : "is not a digit");
    printf("According to isalpha:\n4 %s\n",isalpha('4')? "is a letter" : "is not a letter");
    printf("According to isalnum:\n4 %s\n",isalnum('4')? "is a letter or digit" : "is not a letter or digit");
    printf("According to isxdigit:\n4 %s\n",isxdigit('4')? "is a hexadecimal digit" : "is not a hexadecimal digit");
}