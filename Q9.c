#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);

    int nums[n];
    for(int i=0; i<n; i++){
        printf("enter array elements: ");
        scanf("%d",&nums[i]);
    }
    int *p;
    p=nums;

    for(int i=0; i<=4; i++){
        printf("%d\n",*p);
        p++;
    }
}



