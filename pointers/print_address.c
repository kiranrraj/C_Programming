/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {

    int x = 10;
    int *p;
    p = &x;

    printf("The value of x is %d\n",x);
    // %u prints the address as decimal value
    printf("The address of x is %u\n", p);
    // %u prints the address as hexa decimal value with leading zeros
    printf("The address of x is %p\n", p);
    // %u prints the address as hexa decimal value
    printf("The address of x is %x\n", p);
}