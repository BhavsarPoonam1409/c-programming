#include<stdio.h>
int main(){
    
    int A[3] [2] = { {1,2},{3,4},{5,6}};

    for(int i = 0; i <=2; i++){   //inner loop
        for(int j =0; j<=1; j++){
            printf("%d",A[i][j]); //outerloop
        }
        printf("\n");
    }
    return 0;
}