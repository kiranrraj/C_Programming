#include <stdlib.h>
#include <conio.h>

void SelectionSort(int array[], int length){
    for(int i=0; i<length-1; i++){
        int min = i;
        for(int j=i+1; j<length; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main(){
    int arr[] = {2,7,6,4,8,5};
    SelectionSort(arr, 6);
    for(int i=0; i<6; i++){
        printf("%d", arr[i]);
    }
}
