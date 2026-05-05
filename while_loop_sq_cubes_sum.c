#include<stdio.h>

int main(){
    int n;

    printf("enter number:");
    scanf("%d",&n);

    int i=1,sq,cubes,sum_sq=0,sum_cubes=0;
    while(i<=n){
        sq=i*i;
        cubes=i*i*i;
        sum_sq=sum_sq+sq;
        sum_cubes=sum_cubes+cubes;
        printf("%d:",i);
        printf("square is:%d",sq);
        printf(":cubes is:%d\n",cubes);
        i++;
    }

    printf("sum of square is:%d\n",sum_sq);
    printf("sum of cubes is:%d\n",sum_cubes);
    return 0;
}