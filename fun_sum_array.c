#include<stdio.h>

int sum_array(int a,int num[a]){
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+num[i];
    }
    return sum;
}


int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("enter array element:");
        scanf("%d",&a[i]);
    }

    int result=sum_array(n,a);
    printf("sum is:%d",result);

    return 0;
}