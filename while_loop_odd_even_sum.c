#include<stdio.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int i=1,sum_even=0,sum_odd=0;
    while(i<=n){
        if(i%2==0){
            printf("%d:",i);
            printf("even\n");
            sum_even=sum_even+i;
        }
        else{
            printf("%d:",i);
            printf("odd\n");
            sum_odd=sum_odd+i;
        }
        i++;
    }

    printf("sum of even numbers:%d\n",sum_even);
    printf("sum of odd numbers:%d\n",sum_odd);
    return 0;
}