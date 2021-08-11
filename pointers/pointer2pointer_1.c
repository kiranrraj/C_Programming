#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    printf("\nOutput of ptr1 is : %d", ptr1);
    // Output of ptr1 is : 6422036
    printf("\nOutput of ptr2 is : %d", ptr2);
    // Output of ptr2 is : 6422024
    printf("\nOutput of ptr3 is : %d", ptr3);
    // Output of ptr3 is : 6422016
    printf("\nOutput of *ptr1 is : %d", *ptr1);
    // Output of *ptr1 is : 10
    printf("\nOutput of *ptr2 is : %d", *ptr2);
    // Output of *ptr2 is : 6422036
    printf("\nOutput of *ptr3 is : %d", *ptr3);
    // Output of *ptr3 is : 6422024
    printf("\nOutput of *ptr2 is : %d", *ptr2);
    // Output of *ptr2 is : 6422036
    printf("\nOutput of *ptr3 is : %d", *ptr3);
    // Output of *ptr3 is : 6422024
    printf("\nOutput of **ptr2 is : %d", **ptr2);
    // Output of **ptr2 is : 10
    printf("\nOutput of **ptr3 is : %d", **ptr3);
    // Output of **ptr3 is : 6422036
    printf("\nOutput of ***ptr3 is : %d", ***ptr3);
    // Output of ***ptr3 is : 10

}
