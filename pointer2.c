#include<stdio.h>
int main(){
    int a = 4;
    int* x = &a;
    printf("%p\n",x);
        printf("%p\n",&x);
        printf("%d\n",*x);
    return 0;
}