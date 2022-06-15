#include <stdio.h>

// There are Four ways of referring to array elements i.e
// 1.) Array subscripting
// 2.) Pointer/Offset  with the array name as pointer
// 3.) Pointer subscripting
// 4.) Ponter/offset with a pointer


int main(){
    int b[] = {10,20,30,40};
    int *bPtr = b;
    int i, offset;

    //Method 1
    printf("Array b printed with:\nArray subscript notation\n");

    for (i = 0; i < 4; i++){
        printf("b[%d] = %d\n", i,b[ i ]);
    }

    //Method 2
    printf("Array b printed with:\nPointer/offset notation where the pointer is the array name\n");

    for (offset = 0; offset < 4; offset++){
        printf("*(b + %d) = %d\n", offset,*(b + offset));
    }


    //Method 3
    printf("Array b printed with:\nPointer subscript\n");

    for (i = 0; i < 4; i++){
        printf("bPtr[%d] = %d\n", i,bPtr[ i ]);
    }

    //Method 4
    printf("Array b printed with:\nPointer/offset notation\n");

    for (offset = 0; offset < 4; offset++){
        printf("*(bPtr + %d) = %d\n", offset,*(bPtr + offset));
    }

    return(0);
}