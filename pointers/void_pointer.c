#include <stdio.h>
int main ()
{

    void* ptr;
    int i = 11 ;
    float f = 11.11;

    ptr = &i;
    printf ("Value of i: %d\n", *((int*)ptr) );
    ptr = &f;
    printf ("Value of f: %f\n", *((float*)ptr));
    return 0;
}