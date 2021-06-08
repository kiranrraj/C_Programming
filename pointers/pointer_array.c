#include <stdio.h>
int main() {
    int i, x[6], sum = 0;
    int *ptr;
    ptr = &x[2];
    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; ++i) {
      scanf("%d", x+i);
      sum += *(x+i);
    }
    printf("\nSum = %d", sum);
    printf("\nBase Value: %d",*(ptr-2));
    printf("\nIndex Value 3: %d",*(ptr));
    printf("\nIndex Value 4: %d",*(ptr+1));
    printf("\nIndex value 1: %d",*(ptr-2));
    return 0;
}
