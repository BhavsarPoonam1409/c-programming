#include<stdio.h>

int count_digit(int a){
    int count=0;
    while(a>0){
        count++;
        a=a/10;
    }
    return count;
}

int main(){

    int n;
    printf("enter number:");
    scanf("%d",&n);

    int result=count_digit(n);
    printf("total digit in this number:%d",result);


    
    return 0;
}