/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array :- Find repeated elements in an array
#Date       : 28/05/2021
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    int arr[20], n, i, j, k, flag=0;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter element array[%d]", i);
        scanf("%d", &arr[i]);
    }

    for( j = 0; j < n; j++){
        for( k=0; k < n-1; k++){
            if(arr[j] == arr[k] && j != k){
                printf("Found %d at position %d and %d \n", arr[j], j+1, k+1);
                flag == 1; 
            }
        }
    }

    if(flag != 0){
        printf("\nDuplicate Found ");
    } else{
        printf("\nNo duplicates found ");
    }
    return 0;
}