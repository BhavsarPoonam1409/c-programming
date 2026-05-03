#include<stdio.h>

int main(){
    int s =1;
    int *p =&s;

    printf("%u\n",p);
    printf("%u",&s);
    
    return 0;
}
