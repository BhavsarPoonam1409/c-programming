#include<stdio.h>

int main(){
    int n;
    printf("enter array size:");
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        printf("enter array element:");
        scanf("%d",&a[i]);
    }

    printf("befor reverse array:");
    printf("{");
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("}");

    printf("\nafter reverse array:");
    printf("{");
    for(int i=n-1;i>=0;i--){
        printf("%d,",a[i]);
    }
    printf("}");
    
    return 0;
}