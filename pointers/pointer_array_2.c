
#include <stdio.h>
int main() {
    int i,j, x[6] = {10,20,30,40,50,60};
    int *ptr = x;

    printf("\nBase address: %d",x);
    printf("\nBase address: %d",ptr);

    for(j = 0; j < 6; j++) {
      printf("\nAddress of element x[%d]: %d", j, &x[j]);
      printf("\nValue of element x[%d]: %d", j, x[j]);
    }

    return 0;
}
