#include<stdio.h>

int main(){

    int n;
    printf("enter array size:");
    scanf("%d",&n);

    int num[n];
    for(int i=0;i<n;i++){
        printf("enter array element:");
        scanf("%d",&num[i]);
    }

    int max=num[0];
    for(int i=0;i<n;i++){
        if(num[i]>=max){
            max=num[i];
        }
    }

    printf("laregest number in this array is:%d\n",max);
    
    return 0;
}