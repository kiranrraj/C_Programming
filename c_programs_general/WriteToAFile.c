#include <stdio.h>

int main() {
    int num, sNum, lNum,sum = 0;

    FILE * readF = fopen("numbers.txt", "r");
    FILE * writeF = fopen("out.txt", "w");

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

    fprintf(writeF,"\nSum is %d ",sum);
    fprintf(writeF,"\nLargest Number is %d ",lNum);
    fprintf(writeF,"\nSmallest number is %d ",sNum);

    fclose(readF);
    fclose(writeF);
    return 0; // For the int main
}