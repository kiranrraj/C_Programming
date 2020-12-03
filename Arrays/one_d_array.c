/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdlib.h>
#include <stdio.h>

main() {
    float arr[10], value, total=0.0;
    printf("Enter Values: ");

    for(int i = 0; i < 10; i++)
    {
        printf("Value %d =>", i+1);
        scanf("%f", &value);
        arr[i] = value;
    }
    
    for(int i=0; i<10; i++){
        total+=arr[i];
        printf("Array[%i] : Value %.2f\n",i, arr[i]);
    }
    printf("Sum of values: %.2f\n", total);
}