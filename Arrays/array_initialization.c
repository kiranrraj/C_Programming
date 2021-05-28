/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {

    // Initialize an array an size
    int number[5] = {11,22,33,44,55};

    // Initialize an array without size
    int number1[5] = {10,20,30};

    // Initialize an array of data type float
    float decimalNumber[5] = {1.0,2.0,3.0,4.0,5.0};

    // Initialize an array of type character
    char name[] = {'k', 'i', 'r', 'a', 'n'};

    char name1[] = "kiran";

    for(int i=0; i<5; i++){
        printf("%d",number[i]);
        printf("\n");
        printf("%d",number1[i]);
        printf("\n");
        printf("%.2f",decimalNumber[i]);
        printf("\n");
        printf("%c",name[i]);
        printf("\n");
    }
    printf("Name is %s", name);

}