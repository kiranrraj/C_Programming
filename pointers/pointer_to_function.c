/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers, Function
#Date       : 05/12/2020
*/

#include <stdio.h>

// Define a function
int sum_nums(int x, int y, int z){
    int sum = x + y + z;
    return (sum);
}

void main() {
    int (*s)(int, int, int);
    s = sum_nums;
    int result = s(10, 50, 80);
    printf("Result of sum is %d", result);

}