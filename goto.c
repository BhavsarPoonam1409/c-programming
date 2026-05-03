#include<stdio.h>
#include<stdlib.h>

int main(){
int i = 1;
start:
printf("%d\n",i);
i++;
if(i <= 5){
    goto start;

}
else{
    return 0;
}
}

