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
    char line[8] = "*******";
    int length = 8;
    for (int i = 0; line[i] != '\0'; i++)
    {
        printf("%7.*s\n", i, line);
    }
    for (int i = length-1; i>0; i--)
    {
        printf("%7.*s\n", i, line);
    }
}