#include <stdio.h>

int main() {
    int num, sNum, lNum,sum = 0;
    FILE * readF = fopen("numbers.txt", "r");
    fscanf(readF, "%d", &num);
    lNum = num;
    sNum = num;
    printf("%d",num);
    while(num != 0) {
        sum = sum + num;
        fscanf(readF, "%d", &num);
        if(num !=0){
            printf(" \n%d",num);

            if(lNum <= num) {
            lNum = num;
            }

            if(sNum>= num) {
                sNum = num;
            }
        }
    }
    printf("\nSum is %d ",sum);
    printf("\nLargest Number is %d ",lNum);
    printf("\nSmallest number is %d ",sNum);
    fclose(readF);
}