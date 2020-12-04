/*
#Author     : kiran raj r
#Language   : C
#Topic      : User Definied functions
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void calc(int x, int y, int *sum, int *diff);

void main() {

    int sum_num, diff_num;
    calc(20,10, &sum_num, &diff_num);
    printf("Result of sum: %d\n", sum_num);
    printf("Result of substraction: %d\n", diff_num);
}

void calc(int x, int y, int *sum, int *diff){
    *sum = x + y;
    *diff = x - y;
}