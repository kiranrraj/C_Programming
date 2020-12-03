/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
    int values[5];
    printf("Enter 5 values\n");
    for(int i=0; i<5; i++){
        printf("Enter value %d: ",i);
        scanf("%d", &values[i]);
    }

    for(int j=0; j<5; j++){
        printf("Position: %d  Value is:%d \n", j,values[j]);
    }
}