
#include<stdio.h>
int main() {
    struct student {
        char ch[] = "God is great";
        int no_of_pages = 100;
    };
    struct student *p;
    printf("%d", p-> no_of_pages);
    printf("%s", p->ch);
    getchar();
    return 0;
}