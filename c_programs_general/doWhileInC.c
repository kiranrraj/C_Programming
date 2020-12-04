#include <stdio.h>

void main() {
    int i = 0;
    do{
        printf("Work even if the while loop is false\n");
    }while(i !=0);

    do{
        printf("%d -- ", i);
        i++;
    }while(i != 5);
}