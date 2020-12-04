/*
#Author     : kiran raj r
#Language   : C
#Topic      : User Definied functions, static variable
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    for(int i=0; i<10; i++){
        counter();
        counterStatic();
    }
    
}

void counter(void){
    int x = 0;
    x = x+1;
    printf("The value of x is: %d\n", x);
}

void counterStatic(void){
    static int x = 0;
    x = x+1;
    printf("The value of x (static) is: %d\n", x);
}