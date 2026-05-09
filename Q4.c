#include<stdio.h>
int main(){
    int num[5]={12,67,89,90,56};
    int temp=num[0];
    for(int i=0; i<=4; i++){
        if(num[i]>temp){
            temp=num[i];
        }
    }
    printf("largest number in array is %d\n",temp);
    for(int i=0; i<=4; i++){
        if(num[i]<temp){
            temp=num[i];
        }
    }
    printf("smallest number in array is %d\n",temp);



    return 0;
}


