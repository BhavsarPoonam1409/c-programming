#include<stdio.h>
int fac(int n){
    int ans = 1;
    for(int i=n; i>=1; i--){
        ans = ans *  i;
    }
        
    


    printf("%d",ans);

}


int main(){
    fac(5);
    return 0;
}