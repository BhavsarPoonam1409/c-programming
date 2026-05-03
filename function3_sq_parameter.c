#include<stdio.h>
int sq(int a){
    int ans = a*a; /* a*a*a* [cube]*/
    printf("%d\n",ans);

}


int main(){
    /*for(int i =1; i<=5; i++){
    sq(i); //sq(i*i);[multiply to 4 time  1,16,]
    ans 1 to 5 all sq in output 
    }
    */
    sq(2);
    sq(4);
    return 0;
}