#include <stdio.h>
#include <string.h>

int main() {
    char name[30];
    strcpy(name, "Kiran raj r");
    char fname[25] = "kiran";
    char lname[15] = "raj";
    
    strcat(fname,lname);
    printf("Hello, %s\n", name);
    printf("Hello, %s\n",fname);
    
}