#include<stdio.h>
int main(){
    int even[5];

    int temp = 2;
    for (int i=0; i<=4; i++){
        even[i]=temp;
        temp=temp+2;
        printf("%d\n",even[i]);
    }
    //display all the numbers in arrays
    //for(int i =0; i<=4; i++){
       // printf("%d\n",even[i]);

    
    return 0;
}
