#include<stdio.h>
int main(){
    int a = 5; int b = 4; int temp;

temp = a;
a = b;
b = temp;
printf("%d\n",a);
printf("%d\n",b);
return 0;
}