#include<stdio.h>

int main(){

    // * * *
    //   * *
    //     *

    for(int i=3;i>=1;i--){
        for(int j=3;j>=1;j--){
            if(i>=j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}