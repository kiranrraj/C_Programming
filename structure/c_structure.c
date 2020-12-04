/*
#Author     : kiran raj r
#Language   : C
#Topic      : Structure
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
    
    struct book{
        int b_code;
        char name[40];
        float price;
        int publish_year;
    } book1 ={1022, "water", 200.00, 1999};

    printf("%d, %s, %.2f, %d",book1.b_code, book1.name, book1.price, book1.publish_year);
}
