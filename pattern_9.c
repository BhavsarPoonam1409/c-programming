#include<stdio.h>

int main(){

    // 1 2 3 
    // 1 2 3 
    // 1 2 3

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}