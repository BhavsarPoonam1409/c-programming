#include<stdio.h>

    int sum(int nums[]){
        int sum_array=0;
        for(int i=0; i<=4; i++){
            sum_array=sum_array+nums[i];
        
        }
    }
    int main(){
        int A[5]={1,2,3,4,5};
        int result=sum(A);
        printf("sum of the araay: %d",result);
        
        
        return 0;

    }






