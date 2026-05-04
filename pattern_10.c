#include<stdio.h>

int main(){

    // 3 2 1 
    // 3 2 1
    // 3 2 1

    for(int i=1;i<=3;i++){
        for(int j=3;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}