#include <stdio.h>
int main(){
    int multi_arr[2][2] = {{1,2}, {3,4}};
    printf("\n%d", multi_arr); // Prints starting address of multi_arr
    printf("\n%d", *multi_arr); // Prints starting address of multi_arr
    printf("\n%d", &multi_arr); // Prints starting address of multi_arr
    printf("\n%d", multi_arr[0]); // Prints starting address of multi_arr
    pr

    int (*ptr)[2] = multi_arr;
    printf("\n%d", ptr); // Prints starting address of multi_arr
    printf("\n%d", *ptr); // Prints starting address of multi_arr

    return 0;
}
