/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdlib.h>
#include <stdio.h>

main() {
    int values[5];
    float sum = 0;
    float avg = 0;

    printf("Enter 5 values to calculate the average\n");

    for(int i=0; i<5; i++){
        printf("Enter value %d: ",i);
        scanf("%d", &values[i]);
        sum+=values[i];
    }

    avg = sum / 5;

    printf("Average of your inputs is %.2f", avg);



}