#include<stdio.h>
int main(){
    int a = 4;
    int* x = &a;
    *x = 7;
    printf("%p\n",x);
        printf("%p\n",&x);
        printf("%d\n",*x);
        printf("%d",a);
    return 0;
}