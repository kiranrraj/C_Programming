#include<stdio.h>
int print();
int printAdd(int);
int (*arr[2])();

int main ()
{
    int result;
    void *ptr;
    ptr = &arr;
    arr[0] = print;
    arr[1] = printAdd;
    printf("Address of array: %p", ptr);
    printf("\nFunction 'print's' output: %d", arr[0]());
    arr[1]();
}

int print()
{
    int val = 100;
    return val + 100;
}

int printAdd(int b)
{
    int x = print();
    printf("\nNew Value: %d", x+100);
}
