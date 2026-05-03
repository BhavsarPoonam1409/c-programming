#include<stdio.h>
int A(){
    int x = 10;
    return x + 10;

}
int B(int r){
    return r + 5;
}
        
    int main(){
        int a = A();
        int b = B(a);
        printf("%d\n",a);
        printf("%d",b);
    return 0;
}

