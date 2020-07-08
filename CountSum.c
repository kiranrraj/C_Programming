#include <stdio.h>
int main() {
    int n,num, sum =0;
    int maxNum = 0;
    
    printf("Enter the numbers to get the sum : (zero to exit) : ");
    scanf("%d", &num);
    int smallNum = num;
    while(num!=0) {
        if(num> maxNum) {
            maxNum = num;
        }
        if (smallNum >= num) {
            smallNum = num;
        }
        n = n + 1;
        sum = sum + num;
        printf("Enter the next number : ");
        scanf("%d", &num);
    }
    printf("\n_____________________________________");
    printf("\nThe sum is : %d", sum);
    printf("\nCount of numbers entered : %d", n);
    printf("\nThe largest number is : %d", maxNum);
    printf("\nThe smallest number is : %d", smallNum);
    printf("\n_____________________________________");

}