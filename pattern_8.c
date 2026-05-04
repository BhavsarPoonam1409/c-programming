#include<stdio.h>

int main(){
    // 3 3 3
    // 2 2 2
    // 1 1 1

    for(int i=3;i>=1;i--){
        for(int j=1;j<=3;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}