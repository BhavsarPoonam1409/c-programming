#include<stdio.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int a[n],sum=0;

    for(int i=0;i<n;i++){
        printf("enter array element:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }

    printf("sum array element is:%d",sum);
    

    return 0;
}