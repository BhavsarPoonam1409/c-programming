#include<stdio.h>
int power(int a ,int b){
    int ans = 1;
    for (int i=1; i<=b; i++){
    
    ans = ans * a;
}
    printf("%d",ans);
}


int main(){
     power(2,3);
    
    return 0;
}