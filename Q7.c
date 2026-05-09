#include<stdio.h>

int main(){
    int A[5]={3,4,6,7,8};
    int B[3]={9,10,12};
    int marge[8];

    for(int i=0; i<=4; i++){
        marge[i]=A[i];
    }
    for(int i=0; i<=2; i++){
        marge[i+5]=B[i];
    }
    printf("[");
    for(int i=0; i<=7; i++){
        printf("%d",marge[i]);
        printf(",");

    }
    printf("]");
    return 0;
}