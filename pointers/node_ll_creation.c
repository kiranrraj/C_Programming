#include <stdio.h>
#include <stdlib.h>
#include "node_ll.h"

int main(void){
    int* newData;
    int* nodeData;
    NODE* node;

    newData = (int*)malloc (sizeof (int));
    *newData = 11;

    node = createNode(newData);
    nodeData = (int*)node->dataPtr;
    printf("Data from node: %d\n", *nodeData);
    return 0;
}
