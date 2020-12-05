/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array of Structure
#Date       : 05/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

struct book{
        int b_code;
        char name[40];
        float price;
        int publish_year;
    };

void main(){
    struct book books[3] = {{101, "light", 150.0, 2020}, {201, "sound", 200.0, 1999},
    {301, "rock", 100, 1988}};
    for (int i=0; i<3; i++){
        printf("%d\t %s\t %.2f\t %d\t\n", books[i].b_code, books[i].name, books[i].price, books[i].publish_year);
    }
}
    
    