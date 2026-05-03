#include<stdio.h>
int sum(int a,int b){
    int x = a + b;
    printf("%d\n",x);

}


int main(){
    sum(10,30);
    sum(100,300);
    sum(300,200);
    return 0;
}