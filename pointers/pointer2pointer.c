#include<stdio.h>  
void main ()  
{  
    int value = 10;  
    int *p;  
    int **pp;   
    p = &value;
    pp = &p;  
    printf("Address of 'value': %x\n",p); 
    printf("Address of pointer p: %x\n",pp);
    printf("Value stored at pointer p: %d\n",*p);  
    printf("Value stored at pointer to pointer 'pp': %d\n",**pp); 
}  