#include<stdio.h>
int main(){
    int a = 4;
    int* x = &a; // int *x can also write like this// it stors the address of integer.
    *x = 7;// VVI a is changed.
    int** y  = &x; // it stors the int*(pointer) ka address store  karta h.
    int*** z  = &y; 
        printf("%p\n",&x);
        printf("%p\n",y);
        printf("%d\n",a);
        printf("%d\n",*x);
        printf("%d\n",**y);
        printf("%d\n",***z);
         // %p se adress print hota h
    return 0;
}