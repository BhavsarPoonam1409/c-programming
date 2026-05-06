#include<stdio.h>

void value(int a){
    printf("%d",a);
}

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    value(n);
    return 0;
}