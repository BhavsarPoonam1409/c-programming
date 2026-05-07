#include<stdio.h>

int main(){
    int n;
    printf("enter array size :");
    scanf("%d",&n);

    int a[n],sum=0,average;
    for(int i=0;i<n;i++){
        printf("enter array element:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }

    average=sum/n;

    printf("sum of array element is:%d\n",sum);
    printf("average of array element:%d",average);

    return 0;
}