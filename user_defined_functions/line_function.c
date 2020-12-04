/*
#Author     : kiran raj r
#Language   : C
#Topic      : User Definied functions
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    printLine();
    printLine();
    printLine();
}

void printLine(void){
    for(int i=0; i<50; i++){
        printf("-");
    }
    printf("\n");
}