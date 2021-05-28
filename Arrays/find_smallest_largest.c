/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array :- Find the largest and smallest element in the array.
#Date       : 28/05/2021
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int number, arr[20], sum = 0, small, large, smallPos, largePos;
    float mean = 0;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &number);

    for(int i =0; i<number; i++){
        printf("Enter element array[%d]", i);
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];
    smallPos = 0, largePos = 0;
    for(int j = 0; j<number; j++){
        if(arr[j] < small){
            small = arr[j];
            smallPos = j;
        }

        if(arr[j] > large){
            large = arr[j];
            largePos = j;
        }
    }
    

    printf("\nThe largest element in the array = %d Position: [%d]", large, largePos + 1);
    printf("\nThe smallest element in the array = %d Position: [%d]", small, smallPos + 1);

    return 0;
}