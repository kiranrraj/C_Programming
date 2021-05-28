#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, n, num, arr[20], low;
    printf("\n Enter the number of elements in the array : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the number to be inserted : ");
    scanf("%d", &num);

    arr[n] = num;
    n = n+1;
    
    for(j=0; j<n; j++){
        for(int k = j+1; k<n; k++){
            if(arr[j] > arr[k]){
                low = arr[j];
                arr[j] = arr[k];
                arr[k] = low;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("\n arr[%d] = %d", i, arr[i]);

}