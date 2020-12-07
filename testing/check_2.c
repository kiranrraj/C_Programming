#include <stdio.h>

int main() { 
   int n; 
   for(n = 9; n!=0; n--) 
        printf("n = %d", n--); 
        getchar(); 
        return 0; 
}
// Waring infinite looping