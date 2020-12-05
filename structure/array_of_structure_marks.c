/*
#Author     : kiran raj r
#Language   : C
#Topic      : Array of Structure
#Date       : 05/12/2020
*/

#include <stdio.h>
#include <stdlib.h>

struct student{
        int mark1;
        int mark2;
        int mark3;
        int mark4;
        int mark5;
        int mark6;
        int total;
        float avg;
    };

struct std{
    int mark[6];
    int total;
    float avg;
};

void main(){
    struct student students[3] = {{40,56,65,89,49,70}, {100,90,88,85,95,93}, {90,55,79,81,83,92}};
    struct std stds[3] = {{40,56,65,89,49,70}, {100,90,88,85,95,93}, {90,55,79,81,83,92}};

    for (int i=0; i<3; i++){
        students[i].total = students[i].mark1 + students[i].mark2 + students[i].mark3 
        + students[i].mark4 + students[i].mark5 + students[i].mark6;
        students[i].avg = students[i].total / 6; 
        printf("Mark1\tMark2\tMark3\tMark4\tMark5\tMark6\tTotal\tAverage\n");
        printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %0.2f\n", students[i].mark1,students[i].mark2,students[i].mark3 
        ,students[i].mark4,students[i].mark5,students[i].mark6, students[i].total, students[i].avg);
    }
    
    for (int i=0; i<3; i++){
        for(int j=0; j<6; j++){
            stds[i].total = stds[i].mark[j] + stds[i].total;
        }
        stds[i].avg = stds[i].total / 6; 
        printf("Mark1\tMark2\tMark3\tMark4\tMark5\tMark6\tTotal\tAverage\n");
        printf("%d\t %d\t %d\t %d\t %d\t %d\t %d\t %0.2f\n", stds[i].mark[0],stds[i].mark[1],stds[i].mark[2]
        ,stds[i].mark[3],stds[i].mark[4],stds[i].mark[5], stds[i].total, stds[i].avg);
    
    }
    
}