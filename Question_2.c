#include<stdio.h>
#include<string.h>

int main(){

    char a[25];
    printf("enter a word:");
    gets(a);
    int o=strlen(a);
    int i=o-1;
    
    
    
    while(i>=0){
        printf("%c",a[i]);
        i--;
    
    }
    int j = 123;
    printf("%d",j);
    
    return 0;
}