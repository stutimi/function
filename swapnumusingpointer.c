#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}
int main(){
    int a =2;
    int b = 3;
    swap(&a,&b);
    printf("Enter the value of a %d\n ",a);
    printf("Enter the value of b %d\n",b);
    return 0;
}