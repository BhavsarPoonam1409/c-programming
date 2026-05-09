#include<stdio.h>
int main(){
    int x=10;
    int *p=&x;
    
    printf("value of x printing by pointer: %d\n", *p);
    printf("value of x: %d\n",x);
    printf("add of x printing by pointer: %u\n",p);
    printf("add of x: %u\n",&x);
    return 0;
}