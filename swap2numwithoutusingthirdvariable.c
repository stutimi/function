#include<stdio.h>
int main(){
    int a = 3; int b = 5;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Enter the value of a is %d\n", a);
    printf("Enter the value of b is %d\n",b);
    return 0;
}