#include <stdio.h>
#include <stdlib.h>

int main(){
    struct LinkedList{
    int data;
    struct LinkedList *next;
    }

    typedef struct LinkedList *node;

    node createNode(){
        node temp;
        temp = (node)malloc(sizeof(struct LiknkedList));
        temp -> next = NULL;
        return temp;
    }
}