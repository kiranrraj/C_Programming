#include<stdio.h>
void main ()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for(int i=0; i<5; i++){
        printf("\n%d",arr[i]);
    }
    printf("\n-------------------------------------------------------------\n");

    int *ptr[] = {arr, arr+1, arr+2, arr+3, arr+4};
    for(int j=0; j<5; j++){
        printf("\n%p ",ptr[j]);
        printf("----%d ", *ptr[j]);
    }
    printf("\n-------------------------------------------------------------\n");

    int **pp = ptr;
    printf("\nAddress of 'ptr' is %p. Size of 'ptr' is %d",pp,sizeof(pp));
    pp++;
    printf("\nAddress of 'ptr' after pp++ %p. Size of 'ptr' is %d",pp,sizeof(pp));

    printf("\n-------------------------------------------------------------\n");
    for(int k=0; k<5; k++){
        printf("\n%d", ++arr[k]);
    }
}
