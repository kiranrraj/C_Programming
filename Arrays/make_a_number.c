/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array :- Make a number from digits.
#Date       : 28/05/2021
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int numArr, i, arr[20], j = 0, value = 0;
    float place = 0.1;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &numArr);

    for(i = 0; i<numArr; i++){
        printf("Enter element array[%d]", i);
        scanf("%d", &arr[i]);
    }

    while(j < numArr){
        value = value + arr[j] *pow(10,j);
        j++;
    }

    printf("\nThe number is = %d", value);

    return 0;
}