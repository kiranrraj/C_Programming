/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {
    int x= 20,y = 400;
    printf("Value before swap\n");
    printf("X=%d, Y=%d\n", x,y);
    swap_val(&x, &y);
    printf("Value after swap\n");
    printf("X=%d, Y=%d\n", x,y);
}

void swap_val(int *val1, int *val2){
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}