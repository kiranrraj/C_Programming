#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int count = 0;
struct stack {
    // To hold elements
    int items[MAX];
    // To hold the top position
    int top;
};

typedef struct stack stack1;

void createStack(stack1 *s){
    s->top = -1;
}

int isFull(stack1 *s){
    if(s->top == MAX-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(stack1 *s){
    if(s->top == -1){
        return 1;
    }else{
        return 0;
    }
}

void push (stack1 *s, int element){
    if(isFull(s)){
        printf("Stack is full");
    }else {
        s->top++;
        s->items[s->top] = element;
    }
    count++;
}

void pop (stack1 *s){
    if(isEmpty(s)){
        printf("Stack is full");
    }else {
        printf("Item popped= %d", s->items[s->top]);
        s->top--;
    }
    count--;
    printf("\n");
}

void printStack(stack1 *s){
    printf("Stack Element");
    for(int i=0; i< count; i++){
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

int main() {
    int ch;
    stack1 *s = (stack1 *)malloc(sizeof(stack1));

    createStack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);

    printStack(s);
    pop(s);
    printf("\nAfter Popping Out");
    printStack(s);
}





