#include<stdio.h>

int main(){
    int a[3];
    for(int i=0;i<=2;i++){
        printf("enter array element:");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<=2;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}