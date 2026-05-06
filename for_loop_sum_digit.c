#include<stdio.h>

int main(){
    int n;

    printf("enter number:");
    scanf("%d",&n);

    int rem,sum_digit=0;
    for(n;n>0;n=n/10){
        rem=n%10;
        sum_digit=sum_digit+rem;
    }

    printf("sum digit is:%d\n",sum_digit);
    return 0;
}