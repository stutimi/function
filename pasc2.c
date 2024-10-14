#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 2; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);

    for(int i = 0; i<=n; i++){
        
    int first = 1;
    //printf("%d ",first);
        for(int j = 0; j<=i; j++){
            
            printf("%d ",first);
            first = first*(i-j)/(i+j);
        }
        printf("\n");
    }
    return 0;
}