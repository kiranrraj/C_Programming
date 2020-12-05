/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers
#Date       : 05/12/2020
*/

#include <stdio.h>

int* find_larger(int*, int*);

main() {
    int x = 100, y = 300;
    int *p;
    p = find_larger(&x, &y);
    printf("The largest value is: %d\n", *p);
}

int* find_larger(int *x, int *y){
    if (*x > *y){
        return x;
    } else {
        return y;
    }
}