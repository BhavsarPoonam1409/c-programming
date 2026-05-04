#include<stdio.h>

int main(){

    // 1 3 5 7 9
    // 1 3 5 7 
    // 1 3 5
    // 1 3
    // 1

    for(int i=5;i>=1;i--){
        int x=1;
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x=x+2;
        }
        printf("\n");
    }
    return 0;
}