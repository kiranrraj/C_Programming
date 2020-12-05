/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers, Array
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {
    int arr[4];
    for(int i=0; i<4; i++){
        printf("&arr[%d] = %u\n", i , &arr[i]);
    }
}