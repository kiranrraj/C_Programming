/*
#Author     : kiran raj r
#Language   : C
#Topic      : User Definied functions, Array
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>


void main() {
    int arr[] = {4,6,78,23,45,90,2,40,10,100};
    int largest_num =  largest(arr, 10);
    printf("The largest number in the array: %d\n", largest_num);
}

int largest(int a[], int size){
    int highest = a[0];
    for(int i=0; i<size; i++){
        if (a[i]> highest){
            highest = a[i];
        }
    }
    return (highest);
}