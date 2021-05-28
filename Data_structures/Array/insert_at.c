#include <stdio.h>
#include <conio.h>

void main(){
    int arr[20], n, pos, val, i, j, k;
    printf("\nEnter the number of elements in the array : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter element array[%d]", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position at which elements need to be inserted : ");
    scanf("%d", &pos);

    printf("\nEnter the element to be inserted : ");
    scanf("%d", &val);

    for(j = n; j<=pos; j--){
        arr[j+1] = arr[j];
    }

    arr[pos] = val;
    n = n+1;

    for(k=0; k<n; k++ ){
        printf("array[%d] = %d\n", k, arr[k]);
    }

}