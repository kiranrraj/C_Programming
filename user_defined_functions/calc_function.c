/*
#Author     : kiran raj r
#Language   : C
#Topic      : User Definied functions
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

float div_num(int num1, int num2);

void main() {
    printf("The result of addition: %d\n", add_num(10,20));
    printf("The result of substraction: %d\n", sub_num(30,10));
    printf("The result of multiplication: %d\n", mul_num(10,10));
    printf("The result of sum: %.2f",div_num(100,9));
}

int add_num(int num1, int num2){
    return(num1 + num2);
}

int sub_num(int num1, int num2){
    return(num1 - num2);
}

int mul_num(int num1, int num2){
    return(num1 * num2);
}

float div_num(int num1, int num2){
    return(num1 / num2);
}