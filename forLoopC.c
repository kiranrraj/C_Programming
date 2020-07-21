#include <stdio.h>

void main() {
    int a;
    printf("Please enter a number between 1 and 10 : ");
    scanf("%d",&a);
    for(int i=1; i<=10; i++) {
        printf("%d * %d = %d\n",a,i,(i*a));
    }

}