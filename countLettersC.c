#include <stdio.h>

void main() {
    int count = 0;
    char ch;
    printf("Enter a word to count the number of letters : ");
    while((ch = getchar()) != '\n'){
        count++;
    }

    printf("The length of the entered word is : %d", count);
}