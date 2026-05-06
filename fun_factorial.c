#include<stdio.h>

int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){

    int n;
    printf("enter number:");
    scanf("%d",&n);

    int result=factorial(n);
    printf("factorial of %d is:%d",n,result);
    
    return 0;
}