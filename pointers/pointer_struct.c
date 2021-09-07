#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20];
    int age, total_mark, marks[3];
};

int main() {
    struct student kiran = {"Kiran", 33, 219, {75, 54, 90}};
    struct student *ptr = &kiran;

    printf("\nName = %s, Age = %d, Total Marks = %d", kiran.name, kiran.age, kiran.total_mark);
    printf("\nMarks = %d, Marks = %d, Marks = %d", kiran.marks[0], kiran.marks[1], kiran.marks[2]);
    
    (*ptr).total_mark = 241;
    (*ptr).marks[0] = 80;
    (*ptr).marks[1] = 85;
    (*ptr).marks[2] = 76;
    printf("\nName = %s, Age = %d, Total Marks = %d", kiran.name, kiran.age, kiran.total_mark);
    printf("\nMarks = %d, Marks = %d, Marks = %d", kiran.marks[0], kiran.marks[1], kiran.marks[2]);

    ptr -> total_mark = 201;
    ptr -> marks[0] = 60;
    ptr -> marks[1] = 75;
    ptr -> marks[2] = 66;
    printf("\nName = %s, Age = %d, Total Marks = %d", ptr->name, ptr->age, ptr ->total_mark);
    printf("\nMarks = %d, Marks = %d, Marks = %d", ptr->marks[0], ptr->marks[1], ptr ->marks[2]);
}
