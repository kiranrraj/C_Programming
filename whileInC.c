#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter numbers to get the sum : ");
    scanf("%d", &num);
    while(num !=0) {
        sum = sum + num;
        printf("Enter the next number : ");
        scanf("%d", &num);
    }
    printf("The sum is : %d\n", sum);
}