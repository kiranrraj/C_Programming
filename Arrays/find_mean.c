/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array :- Find the mean
#Date       : 28/05/2021
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int number, arr[20], sum = 0;
    float mean = 0;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &number);

    for(int i =0; i<number; i++){
        printf("Enter element array[%d]", i);
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j<number; j++){
        sum+=arr[j];
    }
    mean = sum / number;

    printf("\nThe sum of the array elements = %d", sum);
    printf("\nThe mean of the array elements = %.2f", mean);

    return 0;
}