#include<stdio.h>

int main() {
    int a = 1000;;
    float b = 200.9;
    double c = 799.8973;
    int d = 45678;
    int salary = 8800;

    printf("%3d\n",a); /*width is narrow, ignored*/
    printf("%6d\n", d);
    printf("%2.3f\n",c); /*width is narrow, ignore the integer part*/
    printf("%5.2f\n",c); 
    printf("%d\n",c); /*Value changed due to coverting the value to int*/
    printf("%3d\n",d);
    printf("%06d\n", salary);
}