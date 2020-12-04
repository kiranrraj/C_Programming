/*
#Author     : kiran raj r
#Language   : C
#Topic      : Structure
#Date       : 04/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

struct book{
    int b_code;
    char name[40];
    float price;
    int publish_year;
};

void main() {
    struct book book1;
    printf("Enter details for books\n");
    printf("Book Code, Book Name, Book Price, Book Published Year\n");
    printf("Book Code >>");
    scanf("%d", &book1.b_code);
    printf("Book Name >>");
    scanf("%s,",book1.name);
    printf("Book Price >>");
    scanf("%f", &book1.price);
    printf("Published Year>>");
    scanf("%d", &book1.publish_year);


    printf("Code\t Name\t  Price\t Published Year\n");
    printf("%d\t %s\t %.2f %d\n", book1.b_code, book1.name, book1.price, book1.publish_year);
    
}