/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
    int array1[] = {22,12,23,44,55};
    printf("First element %d \n", array1[0]);
    printf("Last element %d \n", array1[4]);
    array1[0] = 100;
    array1[4] = 1000;
    printf("First element %d \n", array1[0]);
    printf("Last element %d \n", array1[4]);
}