/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    int pass = 0;
    int fail = 0;
    int array1 [] = {100, 20, 30, 40, 50, 100, 30, 60, 70, 80, 90, 100, 90, 40, 50, 10, 30, 40, 70, 90, 80, 10, 60, 70, 30, 20, 10};
    for (int i=0; i<27; i++){
        if (array1[i] >= 40){
            pass+=1;
        }else {
            fail+=1;
        }
    }

    printf("Number of students passed: %d\n", pass);
    printf("Number of students failed: %d\n", fail);


}