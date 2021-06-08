#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    printf("\nBase Address: %p", ptr);
    if(ptr == NULL)
    {
        printf("\nError! memory not allocated.");
        exit(0);
    }

    printf("\nEnter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("\n%d", ptr+i);
        sum += *(ptr + i);
    }

    printf("\nSum = %d", sum);
    free(ptr);
    return 0;
}
