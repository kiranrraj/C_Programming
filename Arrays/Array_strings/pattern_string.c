/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array, String
#Date       : 03/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    // char line[20];
    // printf("Enter a word:");
    // gets(line);
    // int length = strlen(line);
    // printf("%d", length);
    char line[8] = "*******";
    int length = 8;
    for (int i = 0; line[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // printf("%d -- %d",i,j);
            printf("%c",line[j]);
        }
        printf("\n");
    }
    for (int i = length-1; i>0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            // printf("%d -- %d",i,j);
            printf("%c",line[j]);
        }
        printf("\n");
    }
}