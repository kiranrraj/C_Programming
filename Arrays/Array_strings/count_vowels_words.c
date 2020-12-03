/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array, String
#Date       : 03/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    int i = 0, vow = 0, cons = 0, count = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i] != '\0'){
        count++;
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' 
        || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' 
        || str[i] == 'u' || str[i] == 'U'){
            vow++;
        }else {
            cons++;
        }
        i++;
    }
    printf("\nThe string entered: %s", str);
    printf("\nNo of vowels: %d",vow);
    printf("\nNo of consonants: %d", cons);
    printf("\nTotal characters: %d", count);
}