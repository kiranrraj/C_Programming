#include <stdio.h>
int main() {
    int m1,cm1, m2, cm2, mSum, cmSum;
    printf("Enter values for m and cm (set1)");
    scanf("%d %d", &m1, &cm1);
    printf("Enter values for m and cm (set2)");
    scanf("%d %d", &m2, &cm2);
    
    if(cm1 >=100 || cm2 >= 100) {
        printf("Please enter the cm value less than 100");
    }else {
        mSum = m1 + m2;
        cmSum = cm1 + cm2;
        if(cmSum >= 100) {
            mSum++;
            cmSum = cmSum- 100;
        }
        printf("The sum is %d m %d cm", mSum, cmSum);
    }

}