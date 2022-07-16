#include <stdio.h>
#

int main(){
    char s[] = "12 13 14 15";
    int w, x, y, z;
    sscanf(s, "%d%d%d%d",&w, &x, &y, &z);
    printf("Sum: %d", w + x + y + z);
}