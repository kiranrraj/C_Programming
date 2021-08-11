#include <stdio.h>

void changeElement(int* x, int length){
    for(int i=0; i<size; i++){
        x[i] = i*x[i];
    }
}

int main() {
    int i,j, x[6] = {10,20,30,40,50,60};
    int *ptr = x;
    changeElement(x, sizeof(x)/sizeof(x[0]));
    for(int i=0; i < sizeof(x)/sizeof(x[0]); i++){

    }


    return 0;
}
