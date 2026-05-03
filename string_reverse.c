#include<stdio.h>
int main(){
    
    //take a user for their name and print it in reverse 
    char name[20];
    printf("Enter your name ");
    scanf("%[^\n]s",name);
    char *p;
    p=name;
    int index=-1;
    while(*p != '\0'){
        p++;
        index++;
    }
    for(int i = index; i>=0; i--){
        printf("%c",name[i]);
    }

    for(int i = index; i>=0; i--){
        printf("%c",name[i]);
    }


    return 0;
}