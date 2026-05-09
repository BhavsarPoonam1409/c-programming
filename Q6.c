#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int nums[n];
    for(int i=1; i<=n; i++){
        printf("enter array element: ");
        scanf("%d",&nums[i]);
    }
    printf("[");
    for(int i=n; i>0; i--){
        printf("%d",nums[i]);
        printf(",");
    }
    printf("]");
    return 0;
}