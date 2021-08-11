#include <stdio.h>
void print(char *ch){
    while(*ch != '\0'){
        printf("%c", *ch);
        ch++;
    }
    printf("\n");
}
void main() {
    char name[] = "kiran raj r";
    print(name);
}
