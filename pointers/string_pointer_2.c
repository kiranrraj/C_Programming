/*
#Author     : kiran raj r
#Language   : C
#Topic      : Pointers, string
#Date       : 05/12/2020
*/

#include <stdio.h>

main() {
    char *name;
    name = "kiran";
    char *new_name = name;
    printf("%u\n",name);
    while(*name != '\0'){
        printf("%c", *name);
        *name++;
    }
    printf("\n");
    printf("%u\n",name);
    printf("%u\n",new_name);
    while(*new_name != '\0'){
        printf("%c", *new_name);
        *new_name++;
    }
    printf("\n");
    printf("%u\n",new_name);
}