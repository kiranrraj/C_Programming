/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array :- Find the second largest element in the array.
#Date       : 28/05/2021
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int number, arr[20], sum = 0, large, largePos, second, secondPos;
    float mean = 0;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &number);

    for(int i =0; i<number; i++){
        printf("Enter element array[%d]", i);
        scanf("%d", &arr[i]);
    }

    large = arr[0];
    largePos = 0;

    for(int j = 0; j<number; j++){
        if(arr[j] > large){
            large = arr[j];
            largePos = j;
        }
    }

    second = arr[0];

    for(int j = 0; j<number; j++){
        if(arr[j] != large){
            if(second < arr[j]){
                second = arr[j];
                secondPos = j;
            }
        }
    }
    

    printf("\nThe largest element in the array = %d Position: [%d]", large, largePos + 1);
    printf("\nThe smallest element in the array = %d Position: [%d]", second, secondPos + 1);

    return 0;
}