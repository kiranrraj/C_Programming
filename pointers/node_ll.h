/*Header File For Node Creation In Linked List*/

typedef struct node
{
    void* dataPtr;
    struct node* link;
} NODE;


NODE* createNode (void* itemPtr)
{
    NODE* nodePtr;
    nodePtr = (NODE*) malloc (sizeof (NODE));
    nodePtr->dataPtr = itemPtr;
    nodePtr->link = NULL;
    return nodePtr;
}
