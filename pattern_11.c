#include<stdio.h>

int main(){

    // 1 3 5 7 9
    // 1 3 5 7 9 
    // 1 3 5 7 9
    // 1 3 5 7 9
    // 1 3 5 7 9

    
    for(int i=1;i<=5;i++){
        int x=1;
        for(int j=1;j<=5;j++){
            printf("%d ",x);
            x=x+2;
        }
        printf("\n");
    }
    
    return 0;
}