/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array
#Date       : 02/12/2020
*/

#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {

    system("cls");
    
    char arr[10];
    int length,j;

    printf("Enter a binary number: ");
    gets(arr);

    length = strlen(arr);
    // printf("%d", length);

    for(int i=0; arr[i]!='\0'; i++){
        if(arr[i] != '0' && arr[i] != '1'){
            printf("!! Error: Not binary ");
            getch();
            exit(0);
        }
    }

    for(j=length-1; arr[j] != '1'; j--);
    for(int k=j-1; k>=0; k--){
        if(arr[k] == '1'){
            arr[k] ='0';
        }else{
            arr[k]='1';
        }
    }

    printf("\nThe 2's compliment is %s", arr);
    getch();
}