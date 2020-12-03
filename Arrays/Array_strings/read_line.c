/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array, String
#Date       : 03/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
     char line[100], character;
     int count = 0;
     printf("Enter few words(Press Enter after all words): ");

     do {
         character = getchar();
         line[count] = character;
         count++;
     }
     while(character !='\n');
     count-=1;
     line[count] = '\0';
     printf("\nThe words you entered: %s", line);
}