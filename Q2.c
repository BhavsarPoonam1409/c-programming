#include<stdio.h>
int main(){
    int n;
    
    printf("enter length of array: ");
    scanf("%d",&n);

    int num[n];
    int sum_even=0;
    int sum_odd=0;

    for(int i=0; i<n; i++){
        printf("enter array element: ");
        scanf("%d",&num[i]);

    }

    for(int i=0; i<n; i++){
        if(num[i]%2==0){
            sum_even=sum_even+num[i];
        }
        else{
            sum_odd=sum_odd+num[i];
        }
    }
    printf("sum of even element: %d\n",sum_even);
    printf("sum of odd element: %d\n",sum_odd);

    if(sum_even>sum_odd){
        printf("largest sum of even: %d\n",sum_even);

    }
    else{
        printf("largest sum of odd: %d\n",sum_odd);
    }

    








    return 0;

}
