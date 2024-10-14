#include<stdio.h>
int sum(int, int );

int main(){
    int a;
    int b;
    scanf("%d %d",&a,&b);
    printf("The sum  of a and b is %d\n",sum(a,b));
    return 0;
}
int sum(  int a, int b){
    return a+b;
}