#include<stdio.h>
int main(){
    int nums[8]={5,5,78,7,1,3,6,5};
    int temp=nums[0];
    for (int i=0; i<=8; i++){
        if(nums[i]<temp){  //>highest no // second highest no reverse me loop 7 to 0 
            temp=nums[i];
            printf("%d\n",temp);
    }
    
    }
    return 0;

}
