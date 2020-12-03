/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array, String
#Date       : 03/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
    char str1[100], str2[100];
    int i;
    printf("Enter a string: \n");
    scanf("%s", str1);
    for(i=0; str1[i] != '\0'; i++){
        str2[i] = str1[i]; 
    }
    str2[i] = '\0';
    printf("The word you entered %s, have %d words", str2, i);
}