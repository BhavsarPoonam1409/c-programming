#include<stdio.h>

int main(){
    int a[3][3][2]={
        {{1,2},{3,4},{5,6}},
        {{7,8},{1,2},{3,4}},
        {{5,6},{7,8},{1,2}}
    };

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            for(int k=0;k<=1;k++){
                printf("%d ",a[i][j][k]);
            }
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0;i<=2;i++){
        for(int j=2;j>=0;j--){
            for(int k=0;k<=1;k++){
                printf("%d ",a[i][j][k]);
            }
        }
        printf("\n");
    }

    printf("\n");
    for(int i=0;i<=2;i++){
        for(int j=2;j>=0;j--){
            for(int k=1;k>=0;k--){
                printf("%d ",a[i][j][k]);
            }
        }
        printf("\n");
    }

    printf("\n");
    for(int i=2;i>=0;i--){
        for(int j=2;j>=0;j--){
            for(int k=1;k>=0;k--){
                printf("%d ",a[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}