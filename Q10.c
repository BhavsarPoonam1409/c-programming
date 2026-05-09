#include<stdio.h>
int main(){
    int n,rem,reverse=0;
    printf("enter number: ");
    scanf("%d",&n);

    int orignal_num=n;

    while(n>0){
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(orignal_num==reverse){
        printf("%d number is a palindrom",orignal_num);
    }
    else{
        printf("%d not palindrom number",orignal_num);
    }
    return 0;
}













