/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {

    int x = 10;
    // Declare a pointer
    int *p;
    // Initialize a pointer
    p = &x;
    printf("The address of x is %u\n", p);
    // Get value in a address location using * operator (Value at address operator)
    printf("The value of x is %d\n", *p);
}