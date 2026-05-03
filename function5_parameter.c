#include<stdio.h>
int sum(int a){
    int total = 0;
    for(int i=1; i<=a; i++){
        total = total + i;
        //total +=i;
    }
        
    


    printf("%d\n",total);

}


int main(){
    sum(5);
    sum(10);
    return 0;
}