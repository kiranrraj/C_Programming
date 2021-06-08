/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {
    int p = 100;
    int *ptr = &p;
    printf("Value of p is %d and the address of p is %p", *ptr, ptr);
    printf("\nValue of p is %d and the address of p is %d", *ptr, ptr);
}
